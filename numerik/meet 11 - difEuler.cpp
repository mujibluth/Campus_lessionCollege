#include <iostream>
#include <iomanip>
#include <math.h>
#define f(x,y,z) (z+(0*x)+(0*y))
#define g(x,y,z) ((10/x)-z*(y/x))
using namespace std;
int main()
{
float x0, y0, z0, yn, zn, h;
int i, n;
cout << "Masukkan nilai awal x0: ";
cin >> x0;
cout << "Masukkan nilai awal y0: ";
cin >> y0;
cout <<"Masukkan nilai awal z0: ";
cin >> z0;
cout << "Masukkan h = ";
cin >> h;
cout << "Masukkan N = ";
cin >> n;
for(i = 0; i <n; i++)
{
 yn = y0 + h*f(x0,y0,z0);
 zn = z0 + h*g(x0,y0,z0);
 cout << i << "||" << x0 << "||" << y0 << "||" << z0
<<endl;
 y0 = yn;
 z0 = zn;
 x0 = x0+h;
}
 cout << "Nilai panjang pegas: "<< z0;
 return 0;
}
