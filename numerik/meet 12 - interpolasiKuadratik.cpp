#include <iostream>

using namespace std;

int main()
{
float x1, x2, x3, y1, y2, y3;
float b1, b2, b3;
float x, y;
cout << "masukkan nilai x pada titik 1 (x1) = ";
cin >> x1;
cout << "masukkan nilai y pada titik 1 (y1) = ";
cin >> y1;
cout << "masukkan nilai x pada titik 2 (x2) = ";
cin >> x2;
cout << "masukkan nilai y pada titik 2 (y2) = ";
cin >> y2;
cout << "masukkan nilai x pada titik 3 (x3) = ";
cin >> x3;
cout << "masukkan nilai y pada titik 3 (y3) = ";
cin >> y3;
cout << "masukkan nilai x pada titik baru = ";
cin >> x;
b1 = y1*((x-x2)*(x-x3))/((x1-x2)*(x1-x3));
b2 = y2*((x-x1)*(x-x3))/((x2-x1)*(x2-x3));
b3 = y3*((x-x1)*(x-x2))/((x3-x1)*(x3-x2));
y = b1 + b2 + b3;
cout << "Q(x,y) = " << x << " , " << y;
return 0;
}
