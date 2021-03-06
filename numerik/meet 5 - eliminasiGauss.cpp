#include<iostream>
#include<iomanip>
#include "math.h"
using namespace std;
int main()
{
 int n,i,j,k;
 cout.precision(4);
 cout.setf(ios::fixed);
 cout<<"\nMasukkan Jumlah Persamaan :\n";
 cin>>n;
 float a[n][n+1],x[n];
 cout<<"\nMasukkan Element Aug-Matriks :\n";
 for (i=0;i<n;i++)
 for (j=0;j<=n;j++)
 cin>>a[i][j];
 for (i=0;i<n;i++)
 for (k=i+1;k<n;k++)
 if (abs(a[i][i])<abs(a[k][i]))
 for (j=0;j<=n;j++)
 {
 double temp=a[i][j];
 a[i][j]=a[k][j];
 a[k][j]=temp;
 }
 cout<<"\nHasil Matriks setelah Pivotisation:\n";
 for (i=0;i<n;i++)
 {
 for (j=0;j<=n;j++)
 cout<<a[i][j]<<setw(16);
 cout<<"\n";
 }
 for (i=0;i<n-1;i++)
 for (k=i+1;k<n;k++)
 {
 double t=a[k][i]/a[i][i];
 for (j=0;j<=n;j++)
 a[k][j]=a[k][j]-t*a[i][j];
 }

 cout<<"\n\nHasil Matriks setelah eliminasi gauss:\n";
 for (i=0;i<n;i++) 
 {
 for (j=0;j<=n;j++)
 cout<<a[i][j]<<setw(16);
 cout<<"\n";
 }
 for (i=n-1;i>=0;i--)
 {
 x[i]=a[i][n];
 for (j=i+1;j<n;j++)
 if (j!=i)
 x[i]=x[i]-a[i][j]*x[j];
 x[i]=x[i]/a[i][i];
 }
 cout<<"\nHasil Akhir:\n";
 for (i=0;i<n;i++)
 cout<<x[i]<<endl;
 return 0;
}
