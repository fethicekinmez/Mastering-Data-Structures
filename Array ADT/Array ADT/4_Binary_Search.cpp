
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

int Binary_Search(struct Array arr, int length, int key){
    int l = 0;
    int h = length;
    int mid = (l+h)/2;
    while(l <= h){
        if(key == arr.A[mid]) return mid;
        else if(key < arr.A[mid]){
            h = mid-1;
            mid = (l+h)/2;
        }
        else{
            l = mid+1;
            mid = (l+h)/2;
        }
    }
    return -1;
}

int main(){
    struct Array arr = {{1,2,3,4,5,6,7,8,9,10,11,12,13,14}, 14, 14};
    Display(arr);
    
    int index = Binary_Search(arr, 14 , 12);
    
    cout << "found at " << index << endl;
}
