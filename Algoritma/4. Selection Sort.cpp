#include <iostream>
using namespace std;

int main(){
    int a[5] = {5, 4, 3, 2, 1};
    int imaks, tmp;
    
    for(int i=4; i>=0; i--){
        imaks = 0;
        for(int j=1; j<=i; j++){
            if(a[j] > a[imaks]){
                imaks = j;
            }
        }
        tmp = a[i];
        a[i] = a[imaks];
        a[imaks] = tmp;
    }
    
    for(int i=0; i<5; i++){
        cout << a[i] << endl;
    }
    
    return 0;
}
