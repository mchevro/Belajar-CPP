//ALGORITMA REVERSE STRING
//REFRENCE : https://files.osf.io/v1/resources/6su2h/providers/osfstorage/59e87e1b9ad5a102645803eb?action=download&direct&version=1
//AUTHOR : MCHEVRO

#include <iostream>
using namespace std;

//Global Deklarasi
string plain_teks, cipher_teks;
char e;
short option;

void encrypt(){
    //REVERSE PLAIN TEKS
    for(int i=plain_teks.length(); i >= 0 ; i--){
        e = plain_teks[i];
        cipher_teks = cipher_teks + e;
    }
}

void decrypt(){
    //REVERSE CIPHER TEKS
    for(int i=cipher_teks.length(); i >= 0 ; i--){
        e = cipher_teks[i];
        plain_teks = plain_teks + e;
    }
}

int main(){
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
    return 0;
}
