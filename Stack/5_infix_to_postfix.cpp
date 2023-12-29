

#include <iostream>
using namespace std;

struct Node{
    char data;
    Node *next;
}*top = NULL;

void push(char element){
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

char pop(){
    Node *t;
    char el = NULL;
    if(top == NULL){
        cout << "stack is empty" << endl;
    }
    else{
        t = top;
        top = top->next;
        el = t->data;
        free(t);
    }
    return el;
}

void Diplay(){
    Node *t = top;
    while(t != NULL){
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}


int pre(char x){
    if(x == '+' || x == '-'){
        return 1;
    }
    else if (x=='*' || x=='/'){
        return 2;
    }
    else
        return 0;
}

int isOperand(char x){
    if(x == '+' || x == '-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}

char *InToPost(char *infix){
    int i=0, j=0;
    char *postfix;
    long len = strlen(infix);
    postfix = (char *)malloc((len+2)*sizeof(char));
    
    while(infix[i] !='\0'){
        if(isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else{
            if(pre(infix[i]) > pre(top->data))
                push(infix[i++]);
            else
                postfix[j++] = pop();
        }
    }
    while(top!=NULL){
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    
    return postfix;
}

int main(){
    push('#');
    char infix[10] = "a+b*c";
    char *postfix = InToPost(infix);
    
    cout << postfix << endl;

}
