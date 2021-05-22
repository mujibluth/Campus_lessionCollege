#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void konversiDesimal(int dec, int bas) {
    int temp[100], i;
    for(i=0; dec>0; i++) {
        temp[i]=dec%bas;
        dec=dec/bas;
    } for (i=i-1; i>0; i--) {
        cout << temp[i];
    } 
}

int konversiBinner(int bin, int bas) {
    int conv_value = 0;
    int dec_value = 0;
    int oct_value = 0;
    int temp_value = bin;
    int base = 1;

    if(bas == 10 || bas == 8) {
        while(temp_value) {
            int last_digit = temp_value%10;
            temp_value = temp_value/10;

            conv_value += last_digit*base;
            base = base*2;
        }
    } if(bas == 8) {
        base = 1;

        while(conv_value!=0) {
            oct_value += (conv_value%bas) *base;
            conv_value/=bas;
            base *= 10; }
        
        conv_value = 0;
        conv_value = oct_value;
    } return conv_value;
}

int main() {
    int menu,submenu;
    string submenu_;
    cout << "menu 1 - Konversi Bilangan Bulat" << endl;
    cout << "menu 2 - Konversi Bilangan Pecahan" << endl;
    cout << "masukan pilihan menu: ";
    cin >> menu;

    if(menu==1) {
        cout << "sub menu 1 - Desimal ke Binner" << endl;
        cout << "sub menu 2 - Desimal ke Oktal" << endl;
        cout << "sub menu 3 - Binner ke Desimal" << endl;
        cout << "sub menu 4 - Binner ke Oktal" << endl;
        cout << "masukan pilihan submenu: ";
        cin >> submenu;
    } else if(menu==2) {
        cout << "masukan nilai pecahan biner: ";
        cin >> submenu_;

        float value;
        int x=1,base_y=1;
        double base_z = 2.0;
        int len = submenu_.length();
        int temp_len = len;

        while(len>=0) 
        {
        if(submenu_[x] == ',' || submenu_[x] == '.')
            {
                break;
            }
            x++;
            len--;
        }
        double val_left = 0, val_right = 0.0;

        for(int y=x-1; y>=0; y--) {
            if(submenu_[y]=='1') {
                val_left += base_y;
            }
            base_y = base_y*2;

        } for(int z=temp_len-1; z>x; z--) {
            if(submenu_[z]=='1') {
                val_right += (1/base_z);
            }
            base_z = base_z*2.0;
        }
        cout << fixed << "Konversi ke bilangan pecahan desimal adalah " << setprecision(4) << val_left+val_right;
    }

    switch(submenu) {
        case 1:
            int desToBin, biner[100], i;

            cout << "Masukan nilai desimal: ";
            cin >> desToBin;

            cout << "Hasil konversi ke biner adalah ";
            konversiDesimal(desToBin, 2);
            break;

        case 2:
            int desToOct,octal[100], j;
        
            cout << "Masukan nilai desimal: ";
            cin >> desToOct;

            cout << "Hasil konversi ke oktal adalah: ";
            konversiDesimal(desToOct, 8);
            break;

        case 3:
            int binToDec, tempDec;
            
            cout << "Masukan nilai biner: ";
            cin >> binToDec;

            tempDec = konversiBinner(binToDec, 10);
            cout << "Hasil konversi ke desimal adalah: " << tempDec;
            break;

        case 4:
        int binToOct, tempOct;
        
        cout << "Masukan nilai biner: ";
        cin >> binToOct;

        tempOct = konversiBinner(binToOct, 8);
        cout << "Hasil konversi ke oktal adalah " << tempOct;
        break;
    }
    return 0;
}
