#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first = NULL, *second = NULL, *third = NULL;

void Create(int A[], int n){
    struct Node *t, *last;
    
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
void Create2(int A[], int n){
    struct Node *t, *last;
    
    second = new Node;
    second->data = A[0];
    second->next = NULL;
    last = second;
    
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

void Concat(Node *p1, Node *p2){
    while(p1->next != NULL){
        p1 = p1->next;
    }
    p1->next = p2;
}

void Merge(Node *p1, Node *p2){
    Node *last;

    if(p1->data < p2->data){
        third = last = p1;
        p1 = p1->next;
        third->next = NULL;
    }
    else{
        third = last = p2;
        p2 = p2->next;
        third->next = NULL;
    }
    
    while(p1!=NULL && p2!=NULL){
        if(p1->data < p2->data){
            last->next = p1;
            last = p1;
            p1 = p1->next;
            last->next =NULL;
        }
        else{
            last->next = p2;
            last = p2;
            p2 = p2->next;
            last->next =NULL;
        }
    }
    if(p1) last->next = p1;
    if(p2) last->next = p2;
}

int main(){
    
    int elements1[] = {1,2,3,4,5,6,7,8,9};
    int elements2[] = {3,4,5,76,8,3,9,7,5};
    Create(elements2, 9);
    Create2(elements1, 9);

    Display(first);
    cout << endl;
    Display(second);
    cout << endl;
    Merge(first, second);
    Display(third);
    cout << endl;
    Concat(first, second);
    Display(first);
    cout << endl;

    
    return 0;
}
