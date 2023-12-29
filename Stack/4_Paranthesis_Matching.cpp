
#include <iostream>
using namespace std;

struct Stack{
    int size;
    int top;
    char *s_p;
}*st;

void Create(int size){
    st = new Stack;
    st->size = size;
    st->top = -1;
    st->s_p = new char[size];
}

void push(char element){
    if(st->top == st->size-1){
        cout << "stack is full" << endl;
        return;
    }
    else{
        st->top++;
        st->s_p[st->top] = element;
    }
}

void pop(){
    if(st->top == -1){
        cout << "stack is empty" << endl;
    }
    else{
        st->s_p[st->top] = NULL;
        st->top--;
    }
}

void Display(){
    for(int i=st->top; i>=0; i--){
        cout << st->s_p[i] << " ";
    }
    cout << endl;
}

int isBalanced(char *c){
    for(int i=0; c[i]!='\0'; i++){
        if(c[i] == '(' ){
            push(c[i]);
        }
        else if(c[i] == ')' ){
            pop();
        }
        Display();
    }
    
    if(st->top == -1) return 1; // is matching
    else return 0; // not matching
}

int main(){
    Create(10);
    
    char exp[18] = "(((a+b)*(c+d))";
    
    cout << isBalanced(exp) << endl;
}
