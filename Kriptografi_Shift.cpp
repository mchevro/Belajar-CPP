//ALGORITMA KODE GESER
//REFRENCE : BUKU "PENGANTAR ILMU KRIPTOGRAFI" BY AMIKOM HAL 59
//AUTHOR : MCHEVRO

#include <iostream>
#include <string>
using namespace std;

int main() {
    string plain_teks, cipher_teks;
    int e;
    short kunci;

    plain_teks = "We will meet at mid night";
    kunci = 11;

    for (int i = 0; i < plain_teks.length(); i++) {
        e = tolower(plain_teks[i]);
        e = e + kunci;
        if (int(e) > 122) {
            e = e - 26;
        }
        cipher_teks = cipher_teks + char(toupper(e));
    }
    cipher_teks.erase(remove(cipher_teks.begin(), cipher_teks.end(), '+'), cipher_teks.end());
    cout << cipher_teks;
    return 0;
}
