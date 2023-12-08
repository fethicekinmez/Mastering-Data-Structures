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

struct Array* FindMissing(struct Array arr){
    struct Array* miss = new Array;
    miss->size = arr.size;
    miss->length = 0;
    int diff = arr.A[0];
    int k=0;
    int advance = 0;
        for(int i=0; i<arr.length; i++){
            if(arr.A[i] - i + advance != diff){
                miss->A[k++] = diff+i-advance--;
                miss->length++;
            }
        }
    return miss;
}

int main(){
    struct Array arr = {{6,7,8,9,11,12,14,15,16}, 9, 9};
    Display(arr);
    struct Array* missed = FindMissing(arr);
    cout << "missed ";
    Display(*missed);
}
