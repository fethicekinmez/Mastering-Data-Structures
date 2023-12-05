
#include <iostream>
using namespace std;

int factorialn(int n){
    cout << n << endl;
    if(n>0){
        return n*factorialn(n-1);
    }
    return 1;
}

int main(){
    int x = 5;
    int res = factorialn(x);
    
    cout << "res: " << res << endl;
    
    res = factorialn(0);
    
    cout << "0!: " << res << endl;
}
