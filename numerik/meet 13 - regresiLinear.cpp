#include <iostream>

using namespace std;

int main()
{
	int n;
	float x_num[10], y_num[10], square_x[10], xy[10];
	float sigma_x, sigma_y, sigma_xy, sigma_xx;
	float gradient, coefisien;
	
	cout << "Masukkan jumlah data n = ";
	cin >> n;
	
	for(int i=0;i<n;i++)
	{
		cout << "nilai x data ke-" << i+1 << " =";
		cin >> x_num[i];
		cout << "nilai y data ke-" << i+1 << " =";
		cin >> y_num[i];
		
		square_x[i] = x_num[i]*x_num[i];
		xy[i] = x_num[i]*y_num[i];
	}
	
	cout << "\n";
	cout << "Tabel regresi linier";
	cout << "\n";
	cout << "n " << "Xn " << "Yn " << "Square(Xn) " << "XnYn";
	
	for(int j=0; j<n; j++)
	{
		sigma_x  += x_num[j];
		sigma_y  += y_num[j];
		sigma_xy += (x_num[j]*y_num[j]);
		sigma_xx += (x_num[j]*x_num[j]);
		
		cout << j+1 << " " << x_num[j] << " " << y_num[j] << " " << square_x[j] << " " << xy[j] << endl;
	}
	
	gradient  = ((n*sigma_xy)-(sigma_x*sigma_y))/((n*sigma_xx)-(sigma_x*sigma_x));
	coefisien = (sigma_y/n)-(gradient*(sigma_x/n));
	
	cout << endl;
	cout << "fungsi persamaan: y = " << gradient << "x + " << coefisien; 
	
	return 0;
}
