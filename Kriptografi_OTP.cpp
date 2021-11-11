//REFRENCE : BUKU "PENGANTAR ILMU KRIPTOGRAFI" BY AMIKOM HAL 83 | https://gist.github.com/abhijeetchopra/8e3068ef30702aeed84af0bb1fb87dd7
//AUTHOR : MCHEVRO

#include <iostream>
using namespace std;

string plain_teks, cipher_teks;
char e_plain_teks, e_kunci;
    
//Generate OTP
string encrypt(){
    for(int i=0; i < plain_teks.length(); i++){
        e_plain_teks = toupper(plain_teks[i]); //Menjadikan nilai variable plain_teks huruf besar semua
        e_kunci = rand() % 26 + 65; //Membuat random key 
        
        e_plain_teks = ((e_plain_teks + e_kunci) - 128) % 26 + 64; //Membuat enkripsi
        cipher_teks = cipher_teks + e_plain_teks; //Gabungkan e_plain_teks ke string cipher_teks
    }
    return cipher_teks;
}

int main(){
    srand(time(NULL));
    cout << "KODE OTP" << endl;
    cout << "Teks Anda : ";
    cin >> plain_teks;
    encrypt();
    cout << cipher_teks;
    return 0;
}
