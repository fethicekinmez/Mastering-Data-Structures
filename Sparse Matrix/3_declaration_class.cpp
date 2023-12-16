
#include <iostream>
using namespace std;

class Element{
public:
    int i, j, x;
};

class SparseMatrix{
private:
    int m, n, num;
    Element *e;
public:
    SparseMatrix(int m, int n, int num){
        this->m = m;
        this->n = n;
        this->num = num;
        e = new Element[this->num];
    }
    ~SparseMatrix(){
        delete [] e;
    }
    
    friend istream & operator >> (istream &is, SparseMatrix &s); // for read
    friend ostream & operator << (ostream &os, SparseMatrix &s); // for display
    
    SparseMatrix operator + (SparseMatrix &s);
};

    istream & operator >> (istream &is, SparseMatrix &s) //void Read()
    {
        cout << "Enter non zero elements:" << endl;
        for(int i=0; i < s.num; i++){
            cin >> s.e[i].i >> s.e[i].j >> s.e[i].x;
        }
        return is;
    }

    ostream & operator << (ostream &os, SparseMatrix &s) //void Display()
    {
        int k=0;
        cout << endl;
        for(int i=0; i<s.n; i++){
            for(int j=0; j<s.m; j++){
                if(s.e[k].i == i && s.e[k].j == j)
                cout << s.e[k++].x << " ";
                else cout << 0 << " ";
            }
            cout << endl;
        }
        return os;
    }

SparseMatrix SparseMatrix::operator + (SparseMatrix &s){ //adding
    int i,j,k;
    SparseMatrix *sum = new SparseMatrix(m, n, num + s.num);
    if(m == s.m && n == s.n){
        i=j=k=0;
        
        while(i < num && j < s.num){
            
            if(e[i].i < s.e[j].i){
                sum->e[k++] = e[i++];
            }
            else if(e[i].i > s.e[j].i){
                sum->e[k++] = s.e[j++];
            }
            else{
                if(e[i].j < s.e[j].j){
                    sum->e[k++] = e[i++];
                }
                else if(e[i].j > s.e[j].j){
                    sum->e[k++] = s.e[j++];
                }
                else{
                    sum->e[k] = e[i];
                    sum->e[k++].x = e[i++].x + s.e[j++].x;
                }
            }
        }
        
        for(;i<num;i++)sum->e[k++]=e[i];
        for(;j<s.num;j++)sum->e[k++]=s.e[j];

        sum->num = k;
        
    }
    
    return *sum;
}

int main(){
    SparseMatrix s1( 5, 5, 5);
    cin>>s1; //s1.Read();
    cout<<s1; //s1.Display();
    cout << endl;
    SparseMatrix s2( 5, 5, 5);
    cin>>s1; //s1.Read();
    cout<<s1; //s1.Display();
    cout << endl;
    SparseMatrix sum = s1 + s2;
    cout << sum;
}
