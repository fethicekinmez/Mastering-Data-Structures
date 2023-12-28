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


void RMD(struct Node *p){
    Node *q=p->next;
    
    while(q != NULL){
        if(q->data != p->data){
            p = q;
            q = q->next;
        }
        else{
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
    
}

int main(){
    
    int elements[] = {3,5,8,8,6,4,5,6,6};
    Create(elements, 9);
    Display(first);
    cout << endl;

    RMD(first);
    Display(first);
    
    return 0;
}
