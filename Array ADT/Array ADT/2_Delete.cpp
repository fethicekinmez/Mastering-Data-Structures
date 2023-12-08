#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    cout << "Array Displayed:" << endl;
    for(int i=0; i<arr.length; i++){
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

void Delete(struct Array *arr, int idx){
    int x = arr->A[idx];
    if(idx>=0 && idx<= arr->length){
        for(int i = idx; i < arr->length-1; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        cout << x << " is deleted" << endl;
    }
}

int main() {
    
    struct Array arr = {{2,3,4,5,6}, 10, 5};
    Display(arr);
    
    Delete(&arr, 3);
    Display(arr);
    
}
