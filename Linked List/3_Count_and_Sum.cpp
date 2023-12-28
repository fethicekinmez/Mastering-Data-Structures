
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
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
        last = t;
    }
}

int Count(struct Node *p){
    int count = 0;
    
    while(p!=NULL){
        count++;
        p = p->next;
    }

    return count;
}

int CountR(struct Node *p){
    int count = 0;
    
    if(p!=NULL){
        return CountR(p->next)+1;
    }
    else{
        return 0;
    }

    return count;
}


void Display(struct Node *p){
    
    while(p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
}

int Sum(struct Node *p){
    int sum = 0;
    
    while (p != NULL) {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}
int SumR(struct Node *p){

    if (p != NULL) {
        return SumR(p->next)+p->data;
    }
    else{
        return 0;
    }
}

int main(){
    
    int elements[] = {2,4,5,6,8,9};
    
    Create(elements, 6);
    
    Display(first);
    
    cout << endl << "number of nodes: " << Count(first) << endl;
    cout << "number of nodes(recursive): " << CountR(first) << endl;

    cout << "sum of elements: " << Sum(first) << endl;
    cout << "sum of elements(recursive): " << SumR(first) << endl;
    
}
