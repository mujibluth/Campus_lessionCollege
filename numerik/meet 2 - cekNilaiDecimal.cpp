#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double angka;
int counter(long long i){
	if(i==0)
	 return 0;
	return 1 + counter(i/10);
}

int main(void){
	cout << "masukan angka:";
	cin >> angka;
	long long i = angka;
	cout << "nilai signifikan:" << counter(i);
	return 0;
}
