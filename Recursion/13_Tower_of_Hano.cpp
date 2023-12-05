
#include <iostream>
using namespace std;

void TOH(int n, int A, int B, int C){
    if(n > 0){
        TOH(n-1, A, C, B);
        cout << "from " << A << " to " << C << endl;
        TOH(n-1, B, A, C);
    }

}

int main(){
    int A = 11;
    int B = 22;
    int C = 33;
    
    TOH(3,A,B,C);
    
}
