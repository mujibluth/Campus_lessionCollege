#include <iostream>
#include <iomanip>
#include <math.h>
#define f(x, y) x - pow(y, 2)
using namespace std;
int main() {
 float x0, y0, N, h, yn, xn, fx;
 float k1, k2, x_k2, y_k2, fx_k2;
 int i = 0;
 cout << setprecision(4) << fixed;
 cout << "Masukkan nilai pendekatan awal x(0): ";
 cin >> x0;
 cout << "Masukkan nilai pendekatan awal y(0): ";
 cin >> y0;
 cout << "Masukkan jumlah maksimum iterasi (N): ";
 cin >> N;
 cout << "Masukkan nilai step h : ";
 cin >> h;
 cout << "\n=============== Metode Runge Kutta 2 ===============" <<
endl;
 while (i <= N) {
 fx = f(x0, y0);
   cout << i++ << "." << "| x= " << x0 << " | k1= " << k1 << " | k2= " << k2 << " |
y= " << y0 << endl;
 k1 = h * fx;
 x_k2 = x0 + h;
 y_k2 = y0 + k1;
 fx_k2 = f(x_k2, y_k2);
 k2 = h * fx_k2;
 yn = y0 + (k1 + k2) / 2;
 y0 = yn;
 x0 = x0 + h;
 }
 return 0;
}
