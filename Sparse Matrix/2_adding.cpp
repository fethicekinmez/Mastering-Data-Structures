
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
        scanf("%d%d%d", &s->e[i].i , &s->e[i].j, &s->e[i].x);
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

SparseMatrix * add(struct SparseMatrix *s1, struct SparseMatrix *s2){
    
    struct SparseMatrix *sum = new SparseMatrix;
    
    if (s1->row == s2->row && s1->col == s2->col){
        
        sum->col = s1->col; sum->row = s1->row;
        sum->num_e = s1->num_e + s2->num_e;
        sum->e = new Element[sum->num_e];
        
        int i=0;
        int j=0;
        int k=0;
        while(i < s1->num_e && j< s2->num_e){
            if (s1->e[i].i < s2->e[j].i) {
                sum->e[k++] = s1->e[i++];
            }
            else if (s1->e[i].i > s2->e[j].i){
                sum->e[k++] = s2->e[j++];
            }
            else {
                if (s1->e[i].j < s2->e[j].j) {
                    sum->e[k++] = s1->e[i++];
                }
                else if (s1->e[i].j > s2->e[j].j){
                    sum->e[k++] = s2->e[j++];
                }
                else {
                    sum->e[k] = s1->e[i++];
                    sum->e[k].x = sum->e[k].x + s2->e[j++].x;
                    k++;
                }
            }
        }
    }
    return sum;
}

int main() {
 
    struct SparseMatrix s1;
    createSM(&s1,4 ,5 ,6);
    Display(s1);
    
    cout << endl;
    
    struct SparseMatrix s2;
    createSM(&s2,4 ,5 , 6);
    Display(s2);
    
    cout << endl;
    
    struct SparseMatrix* added;
    added = add(&s1, &s2);
    Display(*added);
    
}
