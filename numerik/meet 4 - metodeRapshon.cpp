#include <iostream>
#include "math.h"
#include <iomanip>
using namespace std;
int main()
{
double fx, faksenx, x1,x0;
double a,b,err=1,e=2.718281828;
int N, i;
cout << "Masukkan nilai akar (x0): ";
cin >> x0;
cout << "Masukkan jumlah iterasi (N): ";
cin >> N;
while (i < N )
{
fx=x0-pow(e,-x0);
faksenx=1+pow(e,-x0);
x1=x0 -(fx/faksenx);
cout << i+1 << " " << x0 << " " << fx<<" " << faksenx << endl;
x0=x1;
i++;
}
cout <<"\n nilai f(x) adalah: ";
cout << fx;
cout <<"\n nilai akar (x) adalah: ";
cout << x0;
}
