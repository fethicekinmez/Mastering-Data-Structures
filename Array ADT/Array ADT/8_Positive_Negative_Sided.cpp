
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

void Side(struct Array *arr){
    int i, j, temp;
    i = 0;
    j = arr->length-1;
    
    while(i<j){
        while(arr->A[i] < 0) i++;
        while(arr->A[j] >= 0) j--;
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

int main(){
    struct Array arr = {{4,-8,13,16,-20,25,-2,33}, 10, 8};
    Display(arr);
    
    Side(&arr);
    Display(arr);
    
}
