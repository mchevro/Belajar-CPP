//REFRENCE : BUKU "PENGANTAR ILMU KRIPTOGRAFI" BY AMIKOM HAL 83
//AUTHOR : MCHEVRO

#include <iostream>
using namespace std;

int main(){
    string plain_teks, cipher_teks, kunci;
    char e_plain_teks, e_kunci;
    
    cout << "KODE OTP" << endl;
    cout << "Teks Anda : ";
    cin >> plain_teks;
    
    kunci = "Tbfrgfarfm";
    
    for(int i=0; i < plain_teks.length(); i++){
        e_plain_teks = toupper(plain_teks[i]);
        e_kunci = toupper(kunci[i]);
        
        e_plain_teks = ((e_plain_teks + e_kunci) - 128) % 26 + 64;
        cipher_teks = cipher_teks + e_plain_teks;
    }
    
    cout << cipher_teks;
    return 0;
}
