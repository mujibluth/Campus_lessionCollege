#include <iostream>
#include <iomanip>
#include "math.h"

using namespace std;
int main()
{
float batas_bawah, batas_atas, h;
float x=0, x1, x2, fx, f1, f2, fdf, f_eksak, error,rata2_error;
cout << "masukkan nilai batas bawah (a) = ";
cin >> batas_bawah;
cout << "masukkan nilai batas atas (b) = ";
cin >> batas_atas;
cout << "masukkan step iterasi (h) = ";
cin >> h;
x = batas_bawah;
while(x<=batas_atas+h)
{
x1 = x + h;
x2 = x - h;
fx = exp(-x)*((sin(2*x))+1);
f1 = exp(-x1)*((sin(2*x1))+1);
f2 = exp(-x2)*((sin(2*x2))+1);
fdf = (f2-(2*fx)+f1)/(h*h);
f_eksak = exp(-1)*(3*sin(2*x) + 4*cos(2*x));
error = fabs(f_eksak-fdf);
rata2_error += error;
cout << fixed << setprecision(5) << x << " " << fx << " " << fdf << " "
<< f_eksak << " " << error << endl;
x = x+h;
}
return 0;
}
