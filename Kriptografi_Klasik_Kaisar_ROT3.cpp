//ALGORITMA KODE KAISAR
//REFRENCE : BUKU "PENGANTAR ILMU KRIPTOGRAFI" BY AMIKOM HAL 51
//AUTHOR : MCHEVRO

#include <iostream>
#include <string>
using namespace std;

//Global Deklarasi
string plain_teks, cipher_teks;
char e;
short option;

//Encryption
void encrypt() {
    for (int i = 0; i < plain_teks.length(); i++) {
        e = plain_teks[i];
        cipher_teks = e + 3 % 26;
        cout << cipher_teks;
    }
}


//Decryption
void decrypt() {
    for (int i = 0; i < cipher_teks.length(); i++) {
        e = cipher_teks[i];
        plain_teks = e - 3 % 26;
        cout << plain_teks;
    }
}

int main() {
    cout << "KODE KAISAR ROT3" << endl;
    cout << "[1] Encrypt" << endl;
    cout << "[2] Decrypt" << endl;
    cout << "Pilih Opsi : ";
    cin >> option;
    cout << endl;

    switch (option) {
    case 1:
        cout << "Teks Anda : ";
        cin.ignore(); 
        getline(cin, plain_teks);
        encrypt();
        break;
    case 2:
        cout << "Encrypt Anda : ";
        cin.ignore(); 
        getline(cin, cipher_teks);
        decrypt();
        break;
    default:
        cout << "Tidak Ada Pilihan!";
        break;
    }
    cout << endl << endl;

    return 0;
}
