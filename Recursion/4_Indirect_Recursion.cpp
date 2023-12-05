
#include <iostream>
using namespace std;

int funB(int n);

int funA(int n){
    if(n>0){
        cout << n << endl;
        funB(n-1);
    }
    return 0;
}

int funB(int n){
    if(n>0){
        cout << n << endl;
        funA(n/2);
    }
    return 0;
}

int main(){
    
    funA(20);

}
