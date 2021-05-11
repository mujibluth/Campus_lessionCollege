#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
 float batas_bawah, batas_atas, N, h;
 float x, x_ganjil, x_genap, Li, L, L_ganjil, L_genap, L_eksak, error;
 int i = 0;
 cout << setprecision(3) << fixed;

 cout << "Masukkan nilai x batas bawah (a): ";
 cin >> batas_bawah;
 cout << "Masukkan nilai x batas atas (b): ";
 cin >> batas_atas;
 cout << "Masukkan N = ";
 cin >> N;

 h = (batas_atas - batas_bawah) / N;
 x = batas_bawah;
 x_ganjil = batas_atas-h;
 x_genap = batas_bawah;

 cout << "\n=== Integrasi Numerik Simpson ===" << endl;
 while (x <= batas_atas) {
 Li = 2 * (x*x*x);
 L += Li;

 cout << i++ << "." << "| x= " << x << " | Li= " << Li << endl;

x = x + h;
 }
 while (x_ganjil >= batas_bawah) {
 L_ganjil += 2 * (x_ganjil*x_ganjil*x_ganjil);

 x_ganjil = x_ganjil - 2*h;
 cout << x_ganjil << " | " << L_ganjil << endl;
 }
 while (x_genap <= batas_atas - h) {
 L_genap += 2 * (x_genap*x_genap*x_genap);;

 x_genap = x_genap + 2*h;
 //cout << x_genap << " | " << L_genap << endl;
 }
 L = (h/3) * (batas_bawah + (4 * L_ganjil) + (2 * L_genap) + batas_atas);

 
 L_eksak = (0.5 * pow(batas_atas, 4)) - (0.5 * pow(batas_bawah, 4));
 error = fabs(L_eksak - L);
 cout << "\nL_numerik = " << L << " ; L_eksak = " << L_eksak << endl;
 cout << "error = " << error << endl;

 return 0;
}
