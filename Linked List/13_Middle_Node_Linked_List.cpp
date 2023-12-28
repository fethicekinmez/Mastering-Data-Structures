
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
    void FindMid();

};

void LinkedL::Display(){
    Node *p = first;
    while(p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void LinkedL::FindMid(){
    Node *p = first, *q = first;
    while (q != NULL) {
        q = q->next;
        if(q == NULL) break;
        q = q->next;
        p = p->next;
    }
    cout << "mid is: "<< p->data << endl;
}


int main(){
    int A[] = {2,4,5,6,7,8,9};
    LinkedL list = LinkedL(A, 7);
    list.Display();

    list.FindMid();
}
