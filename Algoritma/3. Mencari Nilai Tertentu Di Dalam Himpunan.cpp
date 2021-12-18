#include <iostream>
using namespace std;

int main(){
    int a[5], x, idx, i=0;
    
    for(int i=0; i<5; i++){
        cout << "Input Nilai X, Indeks Ke " << i << ": ";
        cin >> a[i];
    }
    
    cout << endl;
    
    cout << "Cari Indeks Nilai X : ";
    cin >> x;
    
    //Perulangan Untuk Menentukan Indeks Nilai X
    while(i < 5 && a[i] != x){
        i++;
    }
    
    if(a[i] == x){
        idx = i;
        cout << "Nilai X, Indeks Ke : " << idx;
    }else{
        idx = 0;
        cout << "Nilai X, Tidak Ada!";
    }
    
    return 0;
}
