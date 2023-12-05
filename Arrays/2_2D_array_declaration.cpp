
#include <iostream>
using namespace std;

int main(){
    
    // 2d array in stack
    int stackA[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            stackA[i][j] = i+j;
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << stackA[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    // 2d array partially in heap
    int *stack_heapA[3];
    for(int i=0; i<3; i++) stack_heapA[i] = new int [4];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            stack_heapA[i][j] = i+j;
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << stack_heapA[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    // 2d array in heap
    int **heapA;
    heapA = new int *[3];
    for(int i=0; i<3; i++) heapA[i] = new int [4];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            heapA[i][j] = i+j;
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << heapA[i][j] << " ";
        }
        cout << endl;
    }
    
    
}
