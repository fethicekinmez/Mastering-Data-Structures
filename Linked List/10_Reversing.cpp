#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first, *last = NULL;

void Create(int A[], int n){
    struct Node *t;
    
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    for(int i=1; i<n; i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        
        last->next = t;
        last=t;
    }
}

void Display(struct Node *p){
    if(p != NULL){
        cout << p->data << " ";
        Display(p->next);
    }
}

void Reverse(Node *p){
    Node *q = NULL, *r = NULL;
    
    while(p != NULL){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}



int main(){
    
    int elements[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    Create(elements, 16);
    Display(first);
    cout << endl;
    
    Reverse(first);
    
    Display(first);
    cout << endl;

    return 0;
}
