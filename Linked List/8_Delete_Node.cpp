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

void Delete(int index){
    Node *p = first;
    if(index == 0){
        first = first->next;
        delete p;
    }
    else{
        for(int i=0; i<index-1; i++){
            p = p->next;
        }
        Node *q = p->next;
        p->next = p->next->next;
        delete q;
    }
}

int main(){
    
    int elements[] = {2,5,6,7,8,9};
    Create(elements, 6);
    Display(first);
    cout << endl;
    
    Delete(3);
    Display(first);

    return 0;
}
