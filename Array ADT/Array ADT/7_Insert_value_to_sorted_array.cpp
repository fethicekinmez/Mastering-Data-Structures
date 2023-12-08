
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

void Insert_s(struct Array *arr, int element){
    if(arr->length == arr->size) return;
    int i = arr->length-1;
    while(i>=0 && arr->A[i] > element){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = element;
    arr->length++;
}

int main(){
    struct Array arr = {{4,8,13,16,20,25,28,33}, 10, 8};
    Display(arr);
    
    Insert_s(&arr, 18);
    Display(arr);
    
}
