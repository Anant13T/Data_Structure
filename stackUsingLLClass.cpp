#include<iostream>
#include<string>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
class stack
{
    private:
    node *top;
    public:
    stack()
    {
        top=NULL;
    }
    void push(int x);
    int pop();
    void display();
};
void stack ::push(int x)
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
int stack::pop()
{
    int x=-1;
    if(top==NULL)
    {
        cout<<"empty";
    }
    else{
        x=top->data;
        node *t=top;
        top=top->next;
        delete t;
    }
    return x;
}
void stack::display()
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
    stack stk;
    stk.push(13);
    stk.push(14);
    stk.push(15);
    stk.pop();
    stk.display();
    return 0;
}
