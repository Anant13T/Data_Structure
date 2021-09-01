#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void enqueue(int x)
{
    node *t=new node;
    if(t==NULL)
    {
        cout<<"full";
    }
    else
    {
        t->data=x;
        t->next=NULL;
        if(front==NULL)
        {
            front=rear=t;
        }
        else
        {
            rear->next=t;
            rear=t;
        }
    }
}
void dequeue()
{
    int x=-1;
    node *p;
    if(front==NULL)
    {
        cout<<"empty";
    }
    else
    {
        x=front->data;
        p=front;
        front=front->next;
        free(p);
    }
}
void display()
{
    node *p=front;
    while(p)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main()
{
    enqueue(13);
    enqueue(14);
    enqueue(15);
    dequeue();
    display();
    return 0;
}