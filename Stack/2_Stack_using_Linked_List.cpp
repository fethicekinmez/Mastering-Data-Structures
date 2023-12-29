
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*top = NULL;

void push(int element){
    struct Node *t;
    t = new Node;
    
    if(t==NULL){
        cout << "stack is full" << endl;
    }else{
        t->data = element;
        t->next = top;
        top = t;
    }
}

void pop(){
    Node *t;
    if(top == NULL){
        cout << "stack is empty" << endl;
    }
    else{
        t = top;
        top = top->next;
        free(t);
    }
}

void Diplay(){
    Node *t = top;
    while(t != NULL){
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}


int main(){
    push(10);
    push(20);
    push(30);
    Diplay();
    
    pop();
    Diplay();
}
