
#include <iostream>
using namespace std;

void fun1(int A[], int n){
    for(int i=0; i<n; i++){
        printf("%d  ", A[i]);
    }
}

int * return_array(int n){
    int *p = (int *)malloc(n);
    for(int i=0; i<n; i++){
        p[i] = i;
    }
    return p;
}


int main(){
    int A[] = {2,4,6,8,10};
    
    for(int x:A){
        cout << x << endl;
    }
    cout << "size of array: " << sizeof(A)/sizeof(int) << endl;
    int size_A = sizeof(A)/sizeof(int);
    
    fun1(A, size_A);
    
    cout << endl << "ARRAY IN HEAP:" << endl;
    int* p = return_array(9);
    for(int i=0; i<9; i++){
        printf("%d  ", p[i]);
    }
    
    return 0;
}
