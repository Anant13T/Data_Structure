#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class node
{
    public:
    char data;
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
    void push(char x);
    char pop();
    int isempty();
};
void stack ::push(char x)
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
char stack::pop()
{
    char x=-1;
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
int stack::isempty()
{
    return top?0:1;
}
int isBalanced(char* exp)
{
    stack stk;
    for(int i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(')
        {
            stk.push(exp[i]);
        }
        else if(exp[i]==')')
        {
            if(stk.isempty())
            {
                return false;
            }
            else{
                stk.pop();
            }
        }
    }
    return stk.isempty()?true:false;
}
int main()
{
    char e[]="((a+b)*(c-b))";
    cout<<isBalanced(e)<<endl;
    return 0;
}