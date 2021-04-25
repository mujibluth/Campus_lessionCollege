#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	float batas_bawah, batas_atas, N, h;
	float x, Li, L, L_t, L_eksak, error, x_atas, x_bawah;
	cout << "masukkan batas bawah = ";
	cin >> batas_bawah;
	cout << "masukkan batas atas = ";
	cin >> batas_atas;
	cout << "masukkan N = ";
	cin >> N;
	h = (batas_atas-batas_bawah)/N;
	x = batas_bawah;
	while(x<=batas_atas+h)
	{
		Li = (x*x);
		L += Li;
		cout << x << " " << Li << endl;
		x = x+h;
	}
	L_t += L-1;
	x_atas = batas_atas*batas_atas*batas_atas;
	x_bawah = batas_bawah*batas_bawah*batas_bawah;
	L = h*(batas_bawah+(2*L_t)+batas_atas)/2;
	L_eksak = (0.333*x_atas)-(0.333*x_bawah);
	error = fabs(L_eksak-L);
	cout << "L_numerik = " << L << "L_eksak = " << L_eksak << endl;
	cout << "error = " << error << endl;
	return 0;
}
