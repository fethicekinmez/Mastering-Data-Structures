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

void Insert(struct Node *p, int index){
    Node *q = first;
    
    if(index == 0){
        p->next = first;
        first = p;
    }
    else{
        for(int i=0; i<index-1; i++){
            q = q->next;
        }
        p->next = q->next;
        q->next = p;
    }
}

int main(){
    
    int elements[] = {2,5,6,7,8,9};
    Create(elements, 6);
    
    Display(first);
    Node *n = new Node;
    n->data = 1;
    n->next = NULL;
    Insert(n, 0);
    cout << endl;
    Display(first);
    
    Node *n2 = new Node;
    n2->data = 0;
    n2->next = NULL;
    Insert(n2, 1);
    cout << endl;
    Display(first);
    
    return 0;
}
