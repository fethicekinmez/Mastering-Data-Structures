
#include <iostream>
using namespace std;

void tree_fun(int n){
    if(n>0){
        cout << n << endl;
        tree_fun(n-1);
        cout << endl;
        tree_fun(n-1);
    }
}

int main(){
    
    tree_fun(3);
}
