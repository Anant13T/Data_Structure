#include<iostream>
#include<string>
using namespace std;
class queue
{
    private:
    int front;
    int rear;
    int size;
    int *Q;
    public:
    queue()
    {
        front=rear=-1;
        size =10;
        Q=new int[size];
    }
    queue(int size)
    {
        front=rear=-1;
        this->size =size;
        Q=new int[this->size];
    }
    void enqueue(int x);
    void dequeue();
    void display();
};
void queue::enqueue(int x)
{
    if(rear==size-1)
    {
        cout<<"full";
    }
    else
    {
        rear++;
        Q[rear]=x;
    }
}
void queue::dequeue()
{
    int x=-1;
    if(front==rear)
    {
        cout<<"empty";
    }
    else
    {
        front++;
        x=Q[front];
    }
}
void queue::display()
{
    for(int i=front+1;i<=rear;i++)
    {
        cout<<Q[i]<<endl;
    }
}
int main()
{
    queue q1(7);
    q1.enqueue(11);
    q1.enqueue(12);
    q1.enqueue(13);
    q1.enqueue(14);
    q1.enqueue(15);
    q1.dequeue();
    q1.display();
    return 0;
}