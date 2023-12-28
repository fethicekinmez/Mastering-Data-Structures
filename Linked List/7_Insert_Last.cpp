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

void InsertLast(int element){
    struct Node *n = new Node;
    n->data = element;
    last->next = n;
    n->next = NULL;
    last = n;
}

int main(){
    
    int elements[] = {2,5,6,7,8,9};
    Create(elements, 6);
    Display(first);
    
    InsertLast(65);
    cout << endl;
    Display(first);
  
    
    return 0;
}
