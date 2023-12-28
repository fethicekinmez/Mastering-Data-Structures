
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

class LinkedL{
private:
    Node *first;
public:
    LinkedL(){first = NULL;}
    LinkedL(int A[], int n){
        first = new Node;
        first->data = A[0];
        first->next = NULL;
        
        Node *p , *last;
        last = first;
        for(int i=1; i<n; i++){
            p = new Node;
            p->data = A[i];
            p->next = NULL;
            
            last->next = p;
            last = p;
        }
    }
    void Display();
    void Insert(int element, int index);
    void Delete(int index);
};

void LinkedL::Display(){
    Node *p = first;
    while(p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
void LinkedL::Insert(int element, int index){
    Node *p = new Node;
    p->data = element;
    
    if(index == 0){
        p->next = first;
        first = p;
    }
    else{
        Node *q = first;
        for(int i=0; i<index-1; i++){
            q = q->next;
        }
        p->next = q->next;
        q->next = p;
    }
}

void LinkedL::Delete(int index){
    Node *p = first;
    if(index == 0){
        first = first->next;
        delete p;
    }
    else{
        for(int i=0; i<index-1; i++){
            p = p->next;
        }
        Node *q = p->next;
        p->next = p->next->next;
        delete q;
    }
}

int main(){
    int A[] = {2,4,5,6,7,8,9};
    LinkedL list = LinkedL(A, 7);
    
    list.Display();
    
    list.Insert(44, 3);
    list.Display();
    list.Delete(3);
    list.Display();
    
}
