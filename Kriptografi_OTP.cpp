//REFRENCE : BUKU "PENGANTAR ILMU KRIPTOGRAFI" BY AMIKOM HAL 51
//AUTHOR : MCHEVRO

#include <iostream>
using namespace std;

int main(){
    string plain_teks, cipher_teks, kunci;
    char e_plain_teks, e_kunci;
    
    plain_teks = "ONETIMEPAD";
    kunci = "TBFRGFARFM";
    
    for(int i=0; i < plain_teks.length(); i++){
        e_plain_teks = plain_teks[i];
        e_kunci = kunci[i];
        
        e_plain_teks = ((e_plain_teks + e_kunci) - 128) % 26 + 64;
        cipher_teks = cipher_teks + e_plain_teks;
    }
    
    cout << cipher_teks;
    return 0;
}
