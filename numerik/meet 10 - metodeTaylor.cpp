#include <iostream>
#include <iomanip>
#include <math.h>
#define f1(x, y) sin(x) - y
#define f2(x, y) cos(x) - (1) * (sin(x) - y)
#define f3(x, y) - cos(x) - y
using namespace std;
int main() {
float x0, y0, N, h, yn, fx, xn;
int bil, i = 0, j = 0, k, l = 0, n;
long int den;
cout << setprecision(4) << fixed;
cout << "Masukkan nilai pendekatan awal x(0): ";
cin >> x0;
cout << "Masukkan nilai pendekatan awal y(0): ";
cin >> y0;
cout << "Masukkan jumlah maksimum iterasi (N): ";
cin >> N;
cout << "Masukkan nilai step h : ";
cin >> h;
cout << "Masukkan nilai maksimum k : ";
cin >> k;
xn = x0;
int den_storage[10] = {};
n = k;
while (l < k) {
den = 1;
for (bil = n; bil >= 1; bil--) {
den = den * bil;
}
den_storage[j] = den;
j++;
l++;
n--;
}
cout << "\n======== Metode Taylor ========" << endl;
while (i <= N) {
yn = y0 + (pow((xn - x0), 1) / den_storage[2]) * f1(x0, y0) + (pow((xn - x0),
2) / den_storage[1]) * f2(x0, y0) + (pow((xn - x0), 3) / den_storage[0]) * f3(x0,
y0);
cout << i++ << "." << "| x(n)= " << xn << " | y(n)= " << yn << endl;
y0 = yn;
xn = xn + h;
}
return 0;
}
