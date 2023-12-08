
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

struct Array* Intersection(struct Array *arr1, struct Array *arr2){
    int i, j, k, l;
    bool flag = 0;
    struct Array *union_arr = (struct Array *)malloc(sizeof(struct Array));
    i = 0;
    j = 0;
    k = 0;
    
    while (i<arr1->length && j<arr2->length) {
        if(arr1->A[i] < arr2->A[j]) i++;
        else if(arr1->A[i] > arr2->A[j]) j++;
        else {
            union_arr->A[k++] = arr1->A[i++];
            j++;
        }
    }
    
    for(; i<arr1->length;i++){
        l = 0;
        while(l < arr2->length){
            if(arr2->A[l++] == arr1->A[i]) flag = 1;
        }
        if(flag == 1) union_arr->A[k++] = arr1->A[i];
        flag = 0;
    }
    for(; j<arr2->length;j++) {
        l = 0;
        while(l < arr1->length){
            if(arr1->A[l++] == arr2->A[j]) flag = 1;
        }
        if(flag == 1) union_arr->A[k++] = arr2->A[j];
        flag = 0;
    }
    
    union_arr->length = k;
    union_arr->size = 10;
    
    return union_arr;
}

struct Array* Union(struct Array *arr1, struct Array *arr2){
    int i, j, k, l;
    bool flag = 0;
    struct Array *union_arr = (struct Array *)malloc(sizeof(struct Array));
    i = 0;
    j = 0;
    k = 0;
    
    while (i<arr1->length && j<arr2->length) {
        if(arr1->A[i] < arr2->A[j]) union_arr->A[k++] = arr1->A[i++];
        else if(arr1->A[i] > arr2->A[j]) union_arr->A[k++] = arr2->A[j++];
        else {
            union_arr->A[k++] = arr1->A[i++];
            j++;
        }
    }
    
    for(; i<arr1->length;i++){
        l = 0;
        while(l < k){
            if(union_arr->A[l] == arr1->A[i]) flag = 1;
            l++;
        }
        if(flag == 0) union_arr->A[k++] = arr1->A[i];
        flag = 0;
    }
    for(; j<arr2->length;j++) {
        l = 0;
        while(l < k){
            if(union_arr->A[l] == arr2->A[j]) flag = 1;
            l++;
        }
        if(flag == 0) union_arr->A[k++] = arr2->A[j];
        flag = 0;
    }
    
    union_arr->length = k;
    union_arr->size = 10;
    
    return union_arr;
}



int main(){
    
    struct Array arr1 = {{4,8,13,16,20}, 10, 5};
    Display(arr1);
    struct Array arr2 = {{20,7,13,15,21}, 10, 5};
    Display(arr2);
    struct Array *arr_union, *arr_intersect;
    
    cout << "Union ";
    arr_union = Union(&arr1, &arr2);
    Display(*arr_union);
    
    cout << "Intersection ";
    arr_intersect = Intersection(&arr1, &arr2);
    Display(*arr_intersect);
    
}
