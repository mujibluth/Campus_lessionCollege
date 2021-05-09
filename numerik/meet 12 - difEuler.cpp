#include <iostream> 
#include <math.h> 
#include <iomanip> 
#include <cmath>

using namespace std;
double df(double x, double y)
{
double fx = 1 - (x*y); return fx;
}
int main()
{
float x0, y0, N, h, y; int n; cout.precision(5); cout.setf(ios::fixed);


cout << "Program Persamaan Diferensial Euler\n"; 
cout << "Abdul Mujiburrohman Luthfi\n19507334027\n\n";
cout << "Masukkan pendekatan awal x0 dan y0 = "; cin >> x0 >> y0;
cout << "Masukkan N = "; cin >> N;
cout << "Masukkan step h = "; cin >> h;
cout << "x" <<setw(16)<< "y" <<setw(16)<< " dy/dx" <<setw(16)<< "y" <<endl;

while(x0<N)
{
y = y0 + (h * df(x0, y0));
cout << x0 <<setw(16)<< y0 <<setw(16)<< df(x0, y0) <<setw(16)<< y <<endl; y0=y;
x0 = x0 + h;
}

cout << x0 <<setw(16)<< y <<endl; cout << "Hasil akhir y = " << y << endl; return 0;
}
