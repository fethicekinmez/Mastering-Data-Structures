
#include <iostream>
using namespace std;

struct T_Matrix{
    int *A;
    int n;
};

void Set(struct T_Matrix *mat, int i, int j, int x){
    if(i<=j)
        mat->A[j-1] = x;
    else
        mat->A[mat->n+i-j-1] = x;
}

int Get(struct T_Matrix mat, int i, int j){
    if(i<=j)
        return mat.A[j-1];
    else
        return mat.A[mat.n+i-j-1];
}

void Display(struct T_Matrix mat){
    int i, j;
    for(i = 0; i < mat.n; i++){
        for(j = 0; j < mat.n; j++){
            if(i<=j)
                cout << mat.A[j-i] << " ";
            else
                cout << mat.A[mat.n+i-j-1] << " ";
        }
        cout << endl;
    }
}

int main() {
 
    struct T_Matrix m;
    m.n = 5;
    m.A = new int [5+4];
    
    for(int i=0; i<9; i++) m.A[i] = i+2;
    
    Display(m);
    cout << endl;
    
    Set(&m, 2, 1, -3);
    Set(&m, 1, 2, -3);
    Display(m);
    cout << endl;
    
}
