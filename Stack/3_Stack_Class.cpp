
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

class Stack{
private:
    Node *top;
public:
    Stack(){top = NULL;}
    void push(int elem);
    void pop();
    void Display();
};

void Stack::push(int elem){
    Node *t = new Node;
    if (t == NULL) {
        cout << "stack is full" << endl;
    } else {
        t->data = elem;
        t->next = top;
        top = t;
    }
}

void Stack::pop(){
    if (top == NULL) {
        cout << "stack is empty" << endl;
    } else {
        Node *t = top;
        top = top->next;
        delete t;
    }
}

void Stack::Display(){
    Node *t = top;
    while(t != NULL){
        cout << t->data << " ";
        t = t->next;
    }
    cout<<endl;
}

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.Display();
    
    st.pop();
    st.Display();
}
