#include <iostream>
using namespace std;

struct Array{
    int A[25];
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

struct Array* Duplicates(struct Array arr){
    struct Array* dupli = new struct Array;
    dupli->size = arr.A[arr.length-1]+1;
    dupli->length = arr.A[arr.length-1]+1;
    for(int i = 0; i < dupli->length; i++) dupli->A[i] = 0;
    int x;
    for(int i = 1; i < arr.length; i++){
        x = arr.A[i];
        if(x == arr.A[i-1]){
            dupli->A[x]++;
        }
    }
    return dupli;
}


int main(){
    struct Array arr = {{6,7,8,9,10,11,11,12,13,14,14,14,15,16,16,17,18,19,19,19,19},21,21};
    Display(arr);
    struct Array* duplicates = Duplicates(arr);
    cout << "missed ";
    Display(*duplicates);
    
    for(int i = 0; i<duplicates->length; i++){
        if(duplicates->A[i] != 0) cout << i << " is repeated " << duplicates->A[i] << " times" << endl;
    }
}
