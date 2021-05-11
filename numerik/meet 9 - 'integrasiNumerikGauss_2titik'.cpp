#include <iostream>
#include "math.h"
#include <iomanip>
using namespace std;
int main()
{
 int n;
 float X1,X2, u, a, b;
 float fX1, fX2, gu1, gu2,L;
 cout << "Diferensiasi numerik " <<endl;
 cout << "Masukkan nilai batas bawah: ";
 cin >> a;
 cout << "Masukkan nilai batas atas: ";
 cin >> b;
 cout << "Masukkan nilai pemangkatan fX: ";
 cin >> n;
 X1=((b-a)*(-1/sqrt(3)) + (b+a))/2;
 X2 = ((b-a)*(1/sqrt(3)) + (b+a))/2;
 fX1= X1;
 fX2= X2;
 gu1= (b-a)*(pow(fX1,n))/2;
 gu2 = (b-a)*(pow(fX2,n))/2;
 L= gu1 + gu2;
 cout << "nilai Luasnya adalah: " << L;
}
