#include <iostream>
#include "math.h"
#include <iomanip>
using namespace std;
int main()
{
double fx, fx_a, fx_b, x, temp;
double a,b,e=1,toleransi_error;
int N, i;
cout << "Masukkan akar batas bawah (a): ";
cin >> a;
cout << "Masukkan akar batas atas (b): ";
cin >> b;
cout << "Masukkan jumlah iterasi (N): ";
cin >> N;
cout << "Masukkan toleransi error (e): ";
cin >> toleransi_error;
while(i < N && toleransi_error < e)
{
fx_a = (a*exp(-a))+1;
fx_b = (b*exp(-b))+1;
x = ((fx_b*a)-(fx_a*b))/(fx_b-fx_a);
fx = (x*exp(-x))+1;
e = fabs(fx);
cout << i+1 << " " << a << " " << b << " " << x << " " << fx << " "
<< fx_a <<
" " << fx_b << endl;
temp = fx*fx_a;
if(temp < 0)
{
b = x;
fx_b = fx;
}
else
{
a = x;
fx_a = fx;
}
i++;
}
cout << "Penyelesaian yang didapatkan adalah x = " << x << " dengan
toleransi kesalahan e = " << e;
return 0;
}
