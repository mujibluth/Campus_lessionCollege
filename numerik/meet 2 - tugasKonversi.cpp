#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;
int main() {
    int select;
    char repeat;

    cout<<"KONVERSI BILANGAN\n\n";

    do {
    cout << "\nPilih Menu Konversi Bilangan :\n";
    cout << "1. Desimal ke biner\n";
    cout << "2. Biner Ke desimal\n";
    cout << "Pilihan: "; cin >> select;

    switch (select) {

        case 1: {
            int des, bin, k = 128;

            do {
                cout << "\n-------------------------------";
                cout << "\nMasukkan bilangan Desimal Positif: ";
                cin >> des;
            }
            while(des < 0);

            cout << "\n----------------------";            
            cout << "\nHasil konversi ke Biner: ";
            for(int i=0; i<8; i++) {
                bin = des/k;
                cout << bin;
                des = des%k;
                k = k/2;
            }
        break;
        }

        case 2: {    
            int des = 0,i = 0;
            char bin[8];
            cout << "\nMasukkan Bilangan Biner: ";
            cin >> bin;

            cout << "\nHasil Konversi ke Desimal: ";
            while(bin[i]!=0) {
                if(bin[i]=='0'||bin[i]=='1') {
                    des = des*2+bin[i]-48;
                }
                i++;
            }
            cout << des;
            break;
        }
        default: {
            cout << "\nTidak ada pilihan " << select;
        }
    }
    cout << "\n\nIngin Menghitung Rangkaian Logika Lagi (y): "; cin >> repeat;
    }
 while((repeat == 'y'));
}
