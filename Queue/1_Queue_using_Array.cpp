
#include <iostream>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void Create(struct Queue *q, int size){
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q, int x){
    if(q->rear == q->size -1){
        cout << "queue is full!" << endl;
    }
    else{
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q){
    int x = -1;
    if(q->front == q->rear){
        cout << "queue is empty!" << endl;
    }
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

void Display(struct Queue q){
    for(int i=q.front+1; i<=q.rear ;i++){
        cout << q.Q[i] << " ";
    }
    cout << endl;
    
}

int main(){
    Queue q1;
    Create(&q1, 5);
    
    enqueue(&q1, 10);
    enqueue(&q1, 20);
    enqueue(&q1, 30);
    
    Display(q1);
    
    dequeue(&q1);
    
    Display(q1);
}
