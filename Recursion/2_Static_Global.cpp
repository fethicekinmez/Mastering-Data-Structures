
#include <iostream>
using namespace std;

int recur(int n){
    static int x = 0;
    if(n>0){
        x++;
        cout << "x: " << x << endl;
        return recur(n-1) + x;
    }
    return 0;
}

int main(){
    int a = 5;
    
    cout << recur(a) << endl;
    
    cout << recur(a) << endl;
    
    cout << recur(a) << endl;
}
