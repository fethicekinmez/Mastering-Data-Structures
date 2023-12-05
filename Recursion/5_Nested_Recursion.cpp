
#include <iostream>
using namespace std;

int nested_fun(int n){
    if (n>100){
        return n-10;
    }
    else{
        return nested_fun(nested_fun(n+11));
    }
}

int main(){
    
    cout << nested_fun(95) << endl;
    
}
