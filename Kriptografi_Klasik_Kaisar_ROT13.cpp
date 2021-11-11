//ALGORITMA KODE KAISAR
//REFRENCE : BUKU "PENGANTAR ILMU KRIPTOGRAFI" BY AMIKOM HAL 53
//AUTHOR : MCHEVRO

#include <iostream>
#include <string>
using namespace std;

//Global Deklarasi
string plain_teks, cipher_teks;
int e;
short option;

//Encryption
void encrypt() {
    for (int i = 0; i < plain_teks.length(); i++) {
        e = tolower(plain_teks[i]);
        e = e + 13;
        if (e > 122) {
            e = e - 26;
        }
        cipher_teks = cipher_teks + char(e);
    }
}


//Decryption
void decrypt() {
    for (int i = 0; i < cipher_teks.length(); i++) {
        e = tolower(cipher_teks[i]);
        e = e - 13;
        if (e < 97) {
            e = e + 26;
        }
        plain_teks = plain_teks + char(e);
    }
}

int main() {
    cout << "KODE KAISAR ROT13" << endl;
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
        cout << cipher_teks;
        break;
    case 2:
        cout << "Encrypt Anda : ";
        cin.ignore();
        getline(cin, cipher_teks);
        decrypt();
        cout << plain_teks;
        break;
    default:
        cout << "Tidak Ada Pilihan!";
        break;
    }
    cout << endl << endl;

    return 0;
}
