#include<iostream>
#define f(x,y,z) (z+(0*x)+(0*y)) 
#define g(x,y,z) ((10/x)-z*(y/x))
#include "math.h"
#include <iomanip>
using namespace std;
int main()
{
float x,y, x0, y0,z0, xn, h, yn,zn, k1, k2, k, l1,l2,L;
int i, n;
cout<<"Masukkan nilai awal x0: ";
cin>> x0;
cout<<"Masukkan nilai awal y0: ";
cin >> y0;
cout <<"Masukkan nilai awal z0: ";
cin >> z0;
cout << "Masukkan nilai xn: ";
cin >> xn;
cout << "Masukkan nilai iterasi N: ";
cin >> n;
h = (xn-x0)/n;
for(i=0; i<n; i++)
{
k1 = h*f(x0,y0,z0);
l1 = h*g(x0,y0,z0);
k2 = h*f(x0+h,y0+k1,z0+k1);
l2 = h*g(x0+h,y0+k1,z0+l1);
k = (k1+k2)/2;
yn = y0 + k;// persamaan diferensiasi yn+1
x = x0*h;

L = (l1+l2)/2;
zn = (z0 + L);// persamaan diferensiasi zn+1
y = y0*h;
cout << i << "||" << x0 << "||" << k1 << "||" << k2 <<"||"
<< l1 <<"||"<< l2 <<"||" << y0 <<"||" << z0 <<endl;
y0 = yn;
z0 = zn;
x0 = x0+(h);
y0 = y0+(h);
}
return 0;
}
