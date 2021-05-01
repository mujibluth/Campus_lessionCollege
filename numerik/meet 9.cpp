#include <iostream>
#include <iomanip>
#include <math.h>
#define f(x,y) (sin(x) -y)
using namespace std;

int main()
{
float X,x0, y0,y1,y2,y3,y4, yn, h, yy,y;
int i , n, K;
cout << setprecision(4) << fixed;
cout << "Masukkan nilai awal x(0): ";
  cin >> x0;
  cout << "Masukkan nilai awal y(0): ";
  cin >> y0;
  cout << "Masukkan h = ";
  cin >> h;
  cout << "Masukkan N = ";
  cin >> n;
  cout << "masukkan nilai K";
  cin >> K;
 X = h*n;

y1 = sin(x0)-y0;
y2 = cos(x0)-sin(x0)+y0;
y3 = -sin(x0) -cos(x0) + (sin(x0)-y);
y4 = -cos(x0) + sin(x0) + cos(x0) -(sin(x0)-y);

    for (i = 0; i < n; i++)
{
yn =y0 + (X-x0)*y1 + (pow(X-x0,2)*y2/2) + (pow(X-x0,K)*y3/6);
  cout << i <<"\t"<< x0 <<"\t"<< yn <<"\t"<< endl;

  //y0 = yn;
  x0 = x0+h;
    }
    return 0;
}
