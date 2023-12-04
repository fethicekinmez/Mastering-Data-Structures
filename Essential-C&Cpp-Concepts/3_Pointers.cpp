#include <iostream>
using namespace std;

int main() {
    
    int a = 10;
    
    int *pa = &a;
    
    cout <<"a: "<< a << endl;
    cout <<"a: "<< *pa << endl;
    
    int A[] = {1,2,3,4,5};
    int *pA = A;
    
    for(int i=0; i<5; i++){
        cout << A[i] << " " << pA[i]  << endl;
    }
    
    int *pS1 = new int[5]; // array is in heap
    
    cout << "pS1: " << *pS1 << " size of pS1: " << sizeof(*pS1) << endl;
    
    int *pS2 = (int *) malloc(5*sizeof(int));  // array is in heap
    
    cout << "pS2: " << *pS2 << " size of pS2: " << sizeof(*pS2) << endl;
    
    for(int i=0; i<5; i++){
        pS1[i] = 3*i;
        pS2[i] = 5*i;
    }
    
    for(int i=0; i<5; i++){
        cout << pS1[i] << " " << pS2[i]  << endl;
    }
    
    delete []pS1; // CPP, free memory
    free(pS2); // C, free memory
    
    return 0;
}
