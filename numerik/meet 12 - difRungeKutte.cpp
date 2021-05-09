#include <iostream> 
#include <math.h> 
#include <iomanip> 
#include <cmath>

using namespace std;
double df(double x, double y)
{
double fx = x - pow(y,2); return fx;
}
int main()
{
float x0, y0, N, h, y, k1, k2; int n;
cout.precision(5); cout.setf(ios::fixed);
cout << "Program Persamaan Diferensial Runge Kutta\n"; cout << "Abdul Mujiburrohman Luthfi\n19507334027\n\n";
cout << "Masukkan pendekatan awal x0 dan y0 = "; cin >> x0 >> y0;
cout << "Masukkan N = "; cin >> N;
cout << "Masukkan step h = "; cin >> h;
cout << "x" <<setw(17)<< "y0" <<setw(16)<< "k1" <<setw(16)<< "k2"
<<setw(15) <<"y" <<endl;

while(x0<N)
{
k1 = h*df(x0, y0);
k2 = h*df(x0 + h, y0 + k1); y = y0 + (0.5 * (k1 + k2));
cout << x0 <<setw(16)<< y0 <<setw(16)<< k1 <<setw(16)<< k2 <<setw(16) << y <<endl;
y0=y;
x0 = x0 + h*N;
}

cout << x0 <<setw(16)<< y <<endl; cout << "Hasil akhir y = " << y << endl; return 0;
}
