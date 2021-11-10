//ALGORITMA KODE GESER
//REFRENCE : BUKU "PENGANTAR ILMU KRIPTOGRAFI" BY AMIKOM HAL 59
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
        e = e + 11;
        if (int(e) > 122) {
            e = e - 26;
        }
        cipher_teks = cipher_teks + char(toupper(e));
    }
    cipher_teks.erase(remove(cipher_teks.begin(), cipher_teks.end(), '+'), cipher_teks.end());
}

//Decryption
void decrypt() {
    for (int i = 0; i < cipher_teks.length(); i++) {
        e = tolower(cipher_teks[i]);
        e = e - 11;
        if (int(e) < 97) {
            e = e + 26;
        }
        plain_teks = plain_teks + char(toupper(e));
    }
    plain_teks.erase(remove(plain_teks.begin(), plain_teks.end(), '+'), plain_teks.end());
}

int main() {
    cout << "KODE SHIFT" << endl;
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
    return 0;
}
