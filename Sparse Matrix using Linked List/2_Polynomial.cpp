#include <iostream>
using namespace std;

struct Node{
    int coeff;
    int exp;
    Node *next;
}*poly = NULL;

void Create(){
    Node *t,*last;
    int num, coeff, exp;
    
    cout << "number of terms: ";
    cin >> num;
    cout << "Enter terms: " << endl;
    
    for(int i=0; i<num; i++){
        t = new Node;
        cin>>coeff;
        cin>>exp;
        t->coeff = coeff;
        t->exp = exp;
        t->next = NULL;

        if(poly == NULL){
            poly = last = t;
        }
        else{
            last->next = t;
            last = t;
        }
        
    }
}

void Display(Node *p){
    
    while(p != NULL){
        cout << p->coeff << "x" << p->exp << "+";
        p = p->next;
    }
    cout<<endl;
}

int main(){
    Create();
    
    Display(poly);
}
