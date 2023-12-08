
#include <iostream>
using namespace std;

struct Array{
    int A[10];
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

int Linear_Search(struct Array arr, int key){
    for(int i = 0; i < arr.length; i++){
        if(key == arr.A[i]) return i;
    }
    return -1;
}

void swap(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

int Linear_Search_v2(struct Array *arr, int key){
    for(int i = 0; i < arr->length; i++){
        if(key == arr->A[i]){
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int Linear_Search_v3(struct Array *arr, int key){
    for(int i = 0; i < arr->length; i++){
        if(key == arr->A[i]){
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int main(){
    struct Array arr = {{2,3,4,5,6}, 10, 5};
    Display(arr);
    
    cout << "found at " << Linear_Search(arr, 5) << ".index" <<endl;
    
    Display(arr);
    cout << "found at " << Linear_Search_v2(&arr, 4) << ".index" <<endl;
    Display(arr);
}
