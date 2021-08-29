#include<iostream>
#include<string>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*top=NULL;
void push(int x)
{
    node *t=new node;
    if(t==NULL)
    {
        cout<<"full";
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop()
{
    int x=-1;
    node *p=new node;
    if(top==NULL)
    {
        cout<<"empty";
    }
    else{
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }
    return x;
}
void display()
{
    node *p=top;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main()
{
    push(12);
    push(13);
    push(14);
    push(15);
    pop();
    display(); 
    return 0;
}