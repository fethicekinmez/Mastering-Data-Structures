
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

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

void Display(struct Node *p){
    if(p != NULL){
        cout << p->data << " ";
        Display(p->next);
    }
}

Node* LinearSearch(struct Node *p, int key){
    while(p != NULL){
        if(p->data == key) return p;
        p = p->next;
    }
    return NULL;
}

Node* LinearSearchv2(struct Node *p, int key){
    Node *pre_p = p;
    while(p != NULL){
        if(p->data == key){
            pre_p->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        pre_p = p;
        p = p->next;
    }
    
    return NULL;
}

int main(){
    
    int elements[] = {2,5,6,7,8,9};
    Create(elements, 6);
    
    Display(first);
    
    cout << endl << "key is found at: " << LinearSearch(first, 7) << endl;
    Display(first);
    cout << endl << "key is found at: " << LinearSearchv2(first, 7) << endl;
    Display(first);
    
    return 0;
}
