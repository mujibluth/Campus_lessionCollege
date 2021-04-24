#include <iostream>
#include <iomanip>
#include "math.h"
using namespace std;
struct penyimpananDataPos{
float storageX_Pos;
float storageFx_Pos;
float storageFxDiff1_Pos;
float storageFxDiff2_Pos;
float storageGap_Pos;
};
struct penyimpananDataNeg{
float storageX_Neg;
float storageFx_Neg;
float storageFxDiff1_Neg;
float storageFxDiff2_Neg;
float storageGap_Neg;
};
penyimpananDataPos dataStorage1[50];
penyimpananDataNeg dataStorage2[50];
int main()
{
float batas_bawah, batas_atas, h;
float x=0, x1, x2, fx, f1, f2, fx_diff1;
float x1_diff2, x2_diff2, f1_diff2, f2_diff2, fx_diff2;
float tempPos, tempXPos, tempFxPos, tempFxDiff1Pos, tempFxDiff2Pos;
float tempNeg, tempXNeg, tempFxNeg, tempFxDiff1Neg, tempFxDiff2Neg;
int i=0, n=0, a, b;
cout << "masukkan nilai batas bawah (a) = ";
cin >> batas_bawah;
cout << "masukkan nilai batas atas (b) = ";
cin >> batas_atas;
cout << "masukkan step iterasi (h) = ";
cin >> h;
  x = batas_bawah;
while(x<=batas_atas+h)
{
fx = (x*x*x)-(2*x*x)-x;
x1 = x + h;
x2 = x - h;
f1 = (x1*x1*x1)-(2*x1*x1)-x1;
f2 = (x2*x2*x2)-(2*x2*x2)-x2;
fx_diff1 = (f1-f2)/(2*h);
x1_diff2 = x + (2*h);
x2_diff2 = x - (2*h);
f1_diff2 = (x1_diff2*x1_diff2*x1_diff2)-(2*x1_diff2*x1_diff2)-
x1_diff2;
f2_diff2 = (x2_diff2*x2_diff2*x2_diff2)-(2*x2_diff2*x2_diff2)-
x2_diff2;
fx_diff2 = (f1_diff2-(2*fx)+f2_diff2)/(4*h*h);
if(fx_diff1 < 0)
{
dataStorage2[i].storageGap_Neg = fabs(fx_diff1);
dataStorage2[i].storageX_Neg = x;
dataStorage2[i].storageFx_Neg = fx;
dataStorage2[i].storageFxDiff1_Neg = fx_diff1;
dataStorage2[i].storageFxDiff2_Neg = fx_diff2;
i++;
}
else if(fx_diff1 > 0)
{
dataStorage1[n].storageGap_Pos = fabs(fx_diff1);
dataStorage1[n].storageX_Pos = x;
dataStorage1[n].storageFx_Pos = fx;
dataStorage1[n].storageFxDiff1_Pos = fx_diff1;
dataStorage1[n].storageFxDiff2_Pos = fx_diff2;
n++;
}
cout << fixed << setprecision(5) << x << " " << fx << " " << fx_diff1 <<
" " << fx_diff2 << endl;
  x = x+h;
}
cout << endl << endl;
// Pengurutan sisi genap
for(int j=1;j<n;j++)
{
a = j-1;
tempPos = dataStorage1[j].storageGap_Pos;
tempXPos = dataStorage1[j].storageX_Pos;
tempFxPos = dataStorage1[j].storageFx_Pos;
tempFxDiff1Pos = dataStorage1[j].storageFxDiff1_Pos;
tempFxDiff2Pos = dataStorage1[j].storageFxDiff2_Pos;
while((dataStorage1[a].storageGap_Pos > tempPos) && a>=0)
{
dataStorage1[a+1].storageGap_Pos =
dataStorage1[a].storageGap_Pos;
dataStorage1[a+1].storageX_Pos =
dataStorage1[a].storageX_Pos;
dataStorage1[a+1].storageFx_Pos =
dataStorage1[a].storageFx_Pos;
dataStorage1[a+1].storageFxDiff1_Pos =
dataStorage1[a].storageFxDiff1_Pos;
dataStorage1[a+1].storageFxDiff2_Pos =
dataStorage1[a].storageFxDiff2_Pos;
a--;
}
dataStorage1[a+1].storageGap_Pos = tempPos;
dataStorage1[a+1].storageX_Pos = tempXPos;
dataStorage1[a+1].storageFx_Pos = tempFxPos;
dataStorage1[a+1].storageFxDiff1_Pos = tempFxDiff1Pos;
dataStorage1[a+1].storageFxDiff2_Pos = tempFxDiff2Pos;
}
// Pengurutan sisi ganjil
for(int k=1;k<i;k++)
{
b = k-1;
tempNeg = dataStorage2[k].storageGap_Neg;
  tempXNeg = dataStorage2[k].storageX_Neg;
tempFxNeg = dataStorage2[k].storageFx_Neg;
tempFxDiff1Neg = dataStorage2[k].storageFxDiff1_Neg;
tempFxDiff2Neg = dataStorage2[k].storageFxDiff2_Neg;
while((dataStorage2[b].storageGap_Neg > tempNeg) && b>=0)
{
dataStorage2[b+1].storageGap_Neg =
dataStorage2[b].storageGap_Neg;
dataStorage2[b+1].storageX_Neg =
dataStorage2[b].storageX_Neg;
dataStorage2[b+1].storageFx_Neg =
dataStorage2[b].storageFx_Neg;
dataStorage2[b+1].storageFxDiff1_Neg =
dataStorage2[b].storageFxDiff1_Neg;
dataStorage2[b+1].storageFxDiff2_Neg =
dataStorage2[b].storageFxDiff2_Neg;
b--;
}
dataStorage2[b+1].storageGap_Neg = tempNeg;
dataStorage2[b+1].storageX_Neg = tempXNeg;
dataStorage2[b+1].storageFx_Neg = tempFxNeg;
dataStorage2[b+1].storageFxDiff1_Neg = tempFxDiff1Neg;
dataStorage2[b+1].storageFxDiff2_Neg = tempFxDiff2Neg;
}
cout << "nilai puncak terjadi antara nilai x = " <<
dataStorage2[0].storageX_Neg << " dan x = " << dataStorage1[0].storageX_Pos <<
endl;
if(fabs(dataStorage2[0].storageX_Neg) >
fabs(dataStorage1[0].storageX_Pos))
{
if(dataStorage1[0].storageX_Pos > 0)
{
cout << "nilai puncak minimum = " <<
dataStorage1[0].storageFxDiff2_Pos;
}
else
{
cout << "nilai puncak maksimum = " <<
dataStorage1[0].storageFxDiff2_Pos;
}
}
else
{
if(dataStorage2[0].storageX_Neg > 0)
{
cout << "nilai puncak minimum = " <<
dataStorage2[0].storageFxDiff2_Neg;
}
else
{
cout << "nilai puncak maksimum = " <<
dataStorage2[0].storageFxDiff2_Neg;
}
}
return 0;
}
