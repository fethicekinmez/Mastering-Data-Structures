
#include <iostream>
using namespace std;

struct Matrix{
    int *A;
    int n;
};

void Set(struct Matrix *mat, int i, int j, int x){
    if(i >= j){
        int idx = i*(i-1)/2+j-1;
        mat->A[idx] = x;
    }
}

int Get(struct Matrix mat, int i, int j){
    if(i >= j) return mat.A[i*(i-1)/2+j-1];
    else return 0;
}

void Display(struct Matrix mat){
    int i, j;
    for(i = 1; i <= mat.n; i++){
        for(j = 1; j <= mat.n; j++){
            if(i >= j) cout << mat.A[(i*(i-1))/2+j-1] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

int main() {
 
    struct Matrix m;
    m.n = 5; //dimension
    m.A = (int *)malloc( m.n * (m.n+1)/2 * sizeof(int));
    
    for(int i = 0; i<(m.n * (m.n+1)/2); i++) m.A[i] = 9;
    
    Display(m);
    
}
