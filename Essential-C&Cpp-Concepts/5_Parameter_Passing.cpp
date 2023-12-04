
#include <iostream>
using namespace std;

void callByAddress(int* x, int*y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void callByReference(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a,b;
    a = 4;
    b = 22;
    cout << "a & b: " << a << " " << b << endl;
    
    callByAddress(&a, &b);
    cout << "a & b: " << a << " " << b << endl;
    
    callByReference(a, b);
    cout << "a & b: " << a << " " << b << endl;
    
}
