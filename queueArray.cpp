#include<iostream>
#include<string>
using namespace std;
struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct queue *q,int size)
{
    q->size=size;
    q->rear=-1;
    q->front=-1;
    q->Q=new int[q->size];
}
void enqueue(struct queue *q,int x)
{
    if(q->rear==q->size-1)
    {
        cout<<"full";
    }
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}
void dequeue(struct queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        cout<<"empty";
    }
    else
    {
        q->front++;
        x=q->Q[q->front];
    }
}
void display(struct queue q)
{
    for(int i=q.front+1;i<=q.rear;i++)
    {
        cout<<q.Q[i]<<endl;
    }
}
int main()
{
    struct queue q;
    create(&q,5);
    enqueue(&q,12);
    enqueue(&q,13);
    enqueue(&q,14);
    dequeue(&q);
    display(q);
    return 0;
}