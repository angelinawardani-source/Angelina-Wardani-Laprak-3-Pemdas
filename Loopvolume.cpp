#include <iostream>
using namespace std;

int main(){
    int pilihan;
    float p, l, t, ta, a, r, volume;
    
    cout << "MENU" << endl;
    cout << "0. KELUAR" << endl;
    cout << "1. HITUNG VOLUME BALOK" << endl;
    cout << "2. HITUNG VOLUME BOLA" << endl;
    cout << "3. HITUNG VOLUME KERUCUT" << endl;
    cout << "4. HITUNG VOLUME SILINDER" << endl;
    cout << "5. HITUNG VOLUME LIMAS SEGITIGA" << endl;


    while(true){
        cout << "MASUKKAN PILLIHAN ANDA : "; 
        cin >> pilihan;      
        if(pilihan == 1){
            cout << "Masukkan panjang : ";
            cin >> p;
            cout << "Masukkan lebar : ";
            cin >> l;
            cout << "Masukkan tinggi : ";
            cin >> t;
            volume = p * l * t;
            cout << "VOLUME BALOK : " << volume << endl;
        }
        if(pilihan == 2){
            cout << "Masukkan jari-jari : ";
            cin >> r;
            volume = 4/3 * 3.14 * r * r * r;
            cout << "VOLUME BOLA : " << volume << endl;
        }
        if(pilihan == 3){
            cout << "Masukkan jari-jari : ";
            cin >> r;
            cout << "Masukkan tinggi : ";
            cin >> t;
            volume = 1/3 * 3.14 * r * r * t;
            cout << "VOLUME KERUCUT : " << volume << endl;
        }
        if(pilihan == 4){
            cout << "Masukkan jari-jari  : ";
            cin >> r;
            cout << "Masukkan tinggi : ";
            cin >> t;
            volume = 3.14 * r * r * t;
            cout << "VOLUME SILINDER : " << volume << endl;
        }
        if(pilihan == 5){
            cout << "Masukkan alas : ";
            cin >> a;
            cout << "Masukkan tinggi alas : ";
            cin >> ta;
            cout << "Masukkan tinggi limas : ";
            cin >> t;
            volume = 1/3 * (1/2 * a * t) * t;
            cout << "VOLUME LIMAS SEGITIGA : " << volume << endl;
        }
        if(pilihan == 0){
            cout << "KELUAR";
            break;
        }
       
    }

    return 0;
}