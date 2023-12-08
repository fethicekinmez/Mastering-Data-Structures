
#include <iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr){
    cout << "Array Displayed: ";
    for(int i=0; i<arr.length; i++){
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

void Rotate(struct Array *arr){
    int i, x;
    x = arr->A[0];
    for(i = 1; i < arr->length; i++){
        arr->A[i-1] = arr->A[i];
    }
    arr->A[i-1] = x;
}

void Shift(struct Array *arr){
    int i;
    for(i = 1; i < arr->length; i++){
        arr->A[i-1] = arr->A[i];
    }
    arr->length--;
}

int main(){
    struct Array arr = {{1,2,3,4,5,6,7,8,9,10,11,12,13,14}, 14, 14};
    Display(arr);
    
    Rotate(&arr);
    Display(arr);
    
    Shift(&arr);
    Display(arr);
}
