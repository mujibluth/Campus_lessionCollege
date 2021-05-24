#include <iostream>
#include<iomanip>
#include <math.h>
#define f(x,y) -2*y
#define f_eksak(x_eksak,y_eksak) exp(-2*x_eksak)
using namespace std;
int main() {
float x0, y0, N, h, yn, fx, fx_eksak, error, rata2_error;
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
 cout << "\n======================= Metode Euler
=======================" << endl;
 while (i <= N) {
 fx = f(x0, y0);
 yn = y0 + (h * fx);

 fx_eksak = f_eksak(x0, y0);
 error = fabs(fx_eksak - y0);
 rata2_error += error;
 cout << i++ << "." << "| x= " << x0 << " | y= " << y0 << " | y'Eksak= " <<
fx_eksak << " | Error= " << error << endl;
 y0 = yn;
 x0 = x0 + h;
 }
 rata2_error = rata2_error / N;
 cout << "\nRata-rata error adalah " << rata2_error << endl;
 return 0;
}
