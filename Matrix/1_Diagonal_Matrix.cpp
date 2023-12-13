
#include <iostream>
using namespace std;

struct Matrix{
    int A[10];
    int n;
};

void Set(struct Matrix *mat, int i, int j, int x){
    if(i == j) mat->A[i-1] = x;
}

int Get(struct Matrix mat, int i, int j){
    if(i==j) return mat.A[i-1];
    else return 0;
}

void Display(struct Matrix mat){
    int i, j;
    for(i = 0; i < mat.n; i++){
        for(j = 0; j < mat.n; j++){
            if(i == j) cout << mat.A[i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

int main() {
 
    struct Matrix m;
    m.n = 4;
    
    for(int i = 1; i <= m.n; i++)
        Set(&m, i, i, i*9);
    
    Display(m);
    
}
