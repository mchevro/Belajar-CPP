#include <iostream>
using namespace std;

int main(){
    string plain_teks, cipher_teks;
    char e;
    
    plain_teks = "hello";
    
    //REVERSE PLAIN TEKS
    for(int i=plain_teks.length(); i >= 0 ; i--){
        e = plain_teks[i];
        cipher_teks = cipher_teks + e;
    }
    cout << cipher_teks;
    
    return 0;
}
