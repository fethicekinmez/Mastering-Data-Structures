#include <iostream>
using namespace std;

int main() {
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 17;
    
    cout << "Size of A: " << sizeof(A) <<endl; // 5*4bytes
    cout << A[1] << endl;
    printf("%d\n", A[1]);
    
    int B[] = {2,4,6,8,10};
    printf("size of B: %lu\n", sizeof(B));
    
    for(int i=0; i<10; i++){
        cout << i << ". : "<< B[i] <<  endl;
    }
    
    cout << "now the rest of the elements will be 0;"<< endl;
    int C[10] = {2,4,6,8,10};
    for(int x:C){
        cout << x << endl;
    }
    
    return 0;
}
