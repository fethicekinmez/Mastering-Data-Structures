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

struct Array * Merge(struct Array *arr1, struct Array *arr2){
    int i, j, k;
    struct Array *merged = (struct Array *)malloc(sizeof(struct Array));
    i = 0;
    j = 0;
    k = 0;
    
    while (i<arr1->length && j<arr2->length) {
        if(arr1->A[i] < arr2->A[j]) merged->A[k++] = arr1->A[i++];
        else merged->A[k++] = arr2->A[j++];
    }
    for(; i<arr1->length;i++) merged->A[k++] = arr1->A[i];
    for(; j<arr2->length;j++) merged->A[k++] = arr2->A[j];
    
    merged->length = arr1->length + arr2->length;
    merged->size = arr1->size + arr2->size;
    return merged;
}

int main(){
    struct Array arr1 = {{4,8,13,16,20,25,28,34}, 10, 8};
    Display(arr1);
    struct Array arr2 = {{5,7,12,15,21,26,29,43}, 10, 8};
    Display(arr2);
    
    struct Array *merged_arr = Merge(&arr1, &arr2);
    
    cout << "Merged ";
    Display(*merged_arr);
    
}
