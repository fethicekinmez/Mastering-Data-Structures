
#include <iostream>
using namespace std;

int powern(int n, int m){
    if(m>0) return n*powern(n, m-1);
    return 1;
}

int main(){
    int res = powern(2, 3);
    
    cout << res << endl;
}
