
#include <iostream>
using namespace std;
// LIFO: Last in First Out

struct Stack{
    int size;
    int top;
    int *s_p;
};

void Create(struct Stack *s, int size){
    s->size = size;
    s->top = -1;
    s->s_p = new int[size];
}

void push(struct Stack *s, int element){
    if(s->top == s->size-1){
        cout << "stack is full" << endl;
        return;
    }
    else{
        s->top++;
        s->s_p[s->top] = element;
    }
}

void pop(struct Stack *s){
    if(s->top == -1){
        cout << "stack is empty" << endl;
    }
    else{
        s->s_p[s->top] = NULL;
        s->top--;
    }
}

void Display(struct Stack s){
    for(int i=s.top; i>=0; i--){
        cout << s.s_p[i] << " ";
    }
    cout << endl;
}


int main() {

    struct Stack st;
    
    Create(&st, 7);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    Display(st);
    
    pop(&st);
    Display(st);
    
    
    
}
