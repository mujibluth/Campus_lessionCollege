#include <iostream>
#include "math.h"
using namespace std;
int main(){
float batas_atas, batas_bawah, h;
float x, x1, fx, fx1;
float fx_diff, error, fx_eksak;
float rata2_error;
cout << "Masukkan nilai x batas bawah: ";
cin >> batas_bawah;
cout << "Masukkan nilai x batas atas: ";
cin >> batas_atas;
cout << "Masukkan iterasi nilai h: ";
cin >> h;
x = batas_bawah;
while(x<=batas_atas){
x1 = x + h;
fx = (x*x)+(2*x)+1;
fx1 = (x1*x1)+(2*x1)+1;
fx_eksak = 2*x+2;
fx_diff = (fx1-fx)/h; //Rumus Utama
error = fabs(fx_eksak-fx_diff);
rata2_error += error;
cout << x << " " << fx << " " << fx_diff << " " <<
fx_eksak << " " << error << endl;
x = x+h;
}
rata2_error = rata2_error/((batas_atas-batas_bawah)/h);
cout << "rata - rata error adalah " << rata2_error << endl;
}
