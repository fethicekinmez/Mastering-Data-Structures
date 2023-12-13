
#include <iostream>
using namespace std;

class Diagonal{
private:
    int *A;
    int n;
public:
    Diagonal(){
        n = 2;
        A = new int [n];
    }
    Diagonal(int n){
        this->n = n;
        A = new int [n];
    }
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
    ~Diagonal(){
        delete []A;
        return;
    }
};

void Diagonal::Set(int i, int j, int x){
    if(i == j) A[i] = x;
}

int Diagonal::Get(int i, int j){
    if(i == j) return A[i];
    else return 0;
}

void Diagonal::Display(){
    int i, j;
    for(i = 0; i < n; i++){
        for (j = 0; j < n; j++) {
            if(i == j) cout << A[i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

int main(){
    struct Diagonal mat(5);
    for (int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            mat.Set(i, j, (i+1)*9);
    
    mat.Display();
    
}
