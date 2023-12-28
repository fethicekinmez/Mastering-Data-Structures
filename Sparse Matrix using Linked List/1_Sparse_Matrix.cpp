
#include <iostream>
using namespace std;

struct Node{
    int col;
    int data;
    Node *next;
};

class LinkedL{
private:
    Node *first;
public:
    LinkedL(){
        first = NULL;
    }
    LinkedL(int cols[], int datas[], int n){
        first = new Node;
        first->col = cols[0];
        first->data = datas[0];
        first->next = NULL;
        
        Node *p = first, *last=first;
        for(int i=1; i<n; i++){
            p->next = new Node;
            p = p->next;
            p->col = cols[i];
            p->data = datas[i];
            
            last = p;
        }
    }
    void Display(int n){
        Node *p = first;
        
        for(int i=0; i<n; i++){
            if(p->col == i){
                cout << p->data << " ";
                p = p->next;
            }
            else cout << 0 << " ";
        }
        cout << endl;
        
    }
};


int main() {
    int m[] = {0,3};
    int n[] = {1,1};
    
    class LinkedL sparseM[4];
    sparseM[0] = LinkedL(m, n, 2);
    sparseM[1] = LinkedL(m, n, 2);
    sparseM[2] = LinkedL(m, n, 2);
    sparseM[3] = LinkedL(m, n, 2);
    
    sparseM[0].Display(4);
    sparseM[1].Display(4);
    sparseM[2].Display(4);
    sparseM[3].Display(4);
    

}
