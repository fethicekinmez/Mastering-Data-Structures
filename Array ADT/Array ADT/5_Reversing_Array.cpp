
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

void Reverse_Array(struct Array *arr){
    int i, j;
    for(i = 0, j = arr->length-1; i < j; i++, j--){
        int temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

int main(){
    struct Array arr = {{1,2,3,4,5,6,7,8,9,10,11,12,13,14}, 14, 14};
    Display(arr);
    
    Reverse_Array(&arr);
    Display(arr);
}
