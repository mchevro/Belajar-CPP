//Referensi : https://www.programiz.com/cpp-programming/examples/fibonacci-series

#include <iostream>
using namespace std;

int main(){
    int f0=0, f1=1, nextStep=0;
    for(int i=0; i<=10; i++){
        if(i==0){
            cout << "f" << i << ": "<< f0 << endl;
            continue;
        }else if(i==1){
            cout << "f" << i << ": "<< f1 << endl;
            continue;
        }
        nextStep = f0+f1;
        f0 = f1;
        f1 = nextStep;
        cout << "f" << i << ": " << nextStep << endl;
        
    }
    return 0;
}
