#include <iostream>

using namespace std;

int main()
{
float x1, x2, y1, y2;
float x, y;
cout << "masukkan nilai x pada titik 1 (x1) = ";
cin >> x1;
cout << "masukkan nilai y pada titik 1 (y1) = ";
cin >> y1;
cout << "masukkan nilai x pada titik 2 (x2) = ";
cin >> x2;
cout << "masukkan nilai y pada titik 2 (y2) = ";
cin >> y2;
cout << "masukkan nilai x pada titik baru = ";
cin >> x;
y = (((y2-y1)/(x2-x1))*(x-x1))+y1;
cout << "Q(x,y) = " << x << " , " << y;
return 0;
}
