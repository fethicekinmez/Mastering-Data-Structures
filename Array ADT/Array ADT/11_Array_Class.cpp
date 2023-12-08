
#include <iostream>
using namespace std;

class Array{
private:
    int *A;
    int size;
    int length;
public:
    Array(){
        size = 10;
        A = new int [10];
        length = 0;
    }
    Array(int sz){
        size = sz;
        A = new int [sz];
        length = 0;
    }
    void Display();
    void Insert(int x, int idx);
    int Delete(int idx);
};

void Array::Display(){
    cout << "Array Displayed: ";
    for(int i=0; i<length; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

void Array::Insert(int x, int idx){
    if(idx >= 0 && idx <= length){
        for(int i = length-1; i >= idx; i--) A[i+1] = A[i];
        A[idx] = x;
        length++;
    }
}

int Array::Delete(int idx){
    int x = A[idx];
    if(idx >= 0 && idx < length){
        for(int i = idx; i < length-1 ; i++) A[i] = A[i+1];
        length--;
    }
    return x;
}

int main(){
    
    Array arr(10);
    
    arr.Insert(3, 0);
    arr.Insert(6, 1);
    arr.Insert(9, 2);
    
    arr.Display();

}
