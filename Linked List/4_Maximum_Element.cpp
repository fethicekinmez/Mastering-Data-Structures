
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

int Max(struct Node *p){
    int max = p->data;
    while(p != NULL){
        if(p->data > max) max = p->data;
        p = p->next;
    }
    return max;
}

int MaxR(struct Node *p){
    int res;
    if(p != NULL){
        res = MaxR(p->next);
        if(res > p->data)
            return res;
        else
            return p->data;
            
    }
    else{
        return INT_MIN;
    }
}

int main(){
    
    int elements[] = {2,5,6,7,8,9};
    Create(elements, 6);
    
    Display(first);
    
    cout << endl << "max element is: " << Max(first) << endl;
    cout << endl << "max element is(recursive): " << MaxR(first) << endl;
    
    return 0;
}
