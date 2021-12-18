#include <iostream>
using namespace std;

int main(){
    int angka[5];
    int maks = angka[0];
    
    //Input Nilai
    for(int i=0; i<5; i++){
        cout << "Input Angka Ke " << i << ": ";
        cin >> angka[i];
    }
    
    cout << endl;
    
    //Algoritma Untuk Mencari Nilai Terbesar
    for(int i=1; i<5; i++){
        if(angka[i] > maks){
            maks = angka[i];
        }
    }
    
    cout << "Nilai Terbesar : " << maks;
    return 0;
}
