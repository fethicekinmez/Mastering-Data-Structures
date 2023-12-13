
#include <iostream>
using namespace std;

class L_Triangular{
private:
    int *A;
    int n;
public:
    L_Triangular(){
        n = 3;
        A = new int [n*(n+1)/2];
    }
    L_Triangular(int n){
        this->n = n;
        A = new int [n*(n+1)/2];
    }
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
    ~L_Triangular(){
        delete []A;
        return;
    }
};

void L_Triangular::Set(int i, int j, int x){
    if(i >= j){
        int idx = i*(i-1)/2+j-1;
        A[idx] = x;
    }
}

int L_Triangular::Get(int i, int j){
    if(i >= j) return A[i*(i-1)/2+j-1];
    else return 0;
}

void L_Triangular::Display(){
    int i, j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(i >= j) cout << A[(i*(i-1))/2+j-1] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

int main(){
    struct L_Triangular mat(5);
    
    for (int i = 1; i <= 5; i++)
        for(int j = 1; j <= 5; j++)
            mat.Set(i, j, 5);
    
    mat.Display();
    
}
