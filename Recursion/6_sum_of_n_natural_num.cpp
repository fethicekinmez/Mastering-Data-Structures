
#include <iostream>
using namespace std;

int sumofn(int n){
    cout << n << endl;
    if(n==0){
        return 0;
    }
    else{
        return sumofn(n-1) + n;
    }
}

int main(){
    int x = 5;
    int sum = sumofn(x);
    
    cout << "sum is: " << sum << endl;
    
    int sumfor = 0;
    for(int i = x; i > 0; i--){
        cout << i << endl;
        sumfor = sumfor + i;
    }
    
    cout << "sum is: " << sum << endl;
}
