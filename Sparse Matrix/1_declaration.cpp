
#include <iostream>
using namespace std;

struct Element{
    int i;
    int j;
    int x;
};

struct SparseMatrix{
    int row;
    int col;
    int num_e;
    struct Element *e;
};

void createSM(struct SparseMatrix *s, int n_row, int n_col, int non_z){
    s->row = n_row;
    s->col = n_col;
    s->num_e = non_z;
    
    s->e = new Element[s->num_e];
    
    int i;
    cout << "enter row, coloumn, value of each element" << endl;
    for(i=0; i<s->num_e; i++){
        cout << i+1 << ". element: " << endl;
        scanf("%d%d%d", &s->e[i].i, &s->e[i].j, &s->e[i].x);
    }
}

void Display(struct SparseMatrix s){
    int i, j, k=0;
    for(i=0; i<s.row; i++){
        for(j=0; j<s.col; j++){
            if(i == s.e[k].i && j == s.e[k].j)
                cout << s.e[k++].x << " ";
            else cout<< 0 << " ";
        }
        cout << endl;
    }
}

int main() {
 
    struct SparseMatrix s;
    createSM(&s, 8, 9, 8);
    
    Display(s);
    
}
