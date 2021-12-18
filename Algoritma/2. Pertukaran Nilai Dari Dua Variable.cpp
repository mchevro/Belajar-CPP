#include <iostream>
using namespace std;

int main(){
    int x, y, temp;
    
    cout << "Input Nilai X : ";
    cin >> x;
    cout << "Input Nilai Y : ";
    cin >> y;
    
    //Algoritma Untuk Pertukaran Nilai 2 Variable
    temp = x; //Fungsi Temp Untuk Menampung Nilai x
    x = y;
    y = temp;
    
    cout << endl;
    
    cout << "Nilai X : " << x;
    cout << endl;
    cout << "Nilai Y : " << y;
    return 0;
}
