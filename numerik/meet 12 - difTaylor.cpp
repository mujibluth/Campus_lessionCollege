#include <iostream> 
#include <math.h> 
#include <iomanip> 
#include <cmath>

using namespace std;
double df(double x, double y)
{
double fx = sin(x) - y; return fx;
}
int main()
{
float x0, y0, N, y, x, fx_aksen, fx2_aksen; int n;
cout.precision(5); cout.setf(ios::fixed);

cout << "Program Persamaan Diferensial Taylor\n";
cout << "Abdul Mujiburrohman Luthfi\n19507334027\n\n";
cout << "Masukkan pendekatan awal x0 dan y0 = "; cin >> x0 >> y0;
cout << "Masukkan N = "; cin >> N;
cout << "Masukkan nilai x = "; cin >> x;
cout << "x" <<setw(17)<< "y0" <<setw(16)<<"y" <<endl; while(x0<N)
{
fx_aksen = (cos(x) - 1)*(sin(x) - y); fx2_aksen = -cos(x) - y;
y = y0 + ((x-x0) * df(x0,y0)) + ((pow(x-x0, 2)/2)*fx_aksen) + ((pow(x-x0, 3)/6)*fx2_aksen);
cout << x0 <<setw(16)<< y0 <<setw(16) << y <<endl; y0=y;
x0 = x0 + x*N;
}

cout << x0 <<setw(16)<< y <<endl; cout << "Hasil akhir y = " << y << endl; return 0;
}
