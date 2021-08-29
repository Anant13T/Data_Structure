#include<iostream>
#include<string>
using namespace std;
struct stack
{
    int size;
    int top;
    int *s;
};
void create(struct stack  *st)
{
    cout<<"enter the size"<<endl;
    cin>>st->size;
    st->top=-1;
    st->s=new int[st->size];
}
void display(struct stack st)
{
    if(st.top==-1)
    {
        cout<<"stack is empty";
    }
    else
    {
       for(int i=st.top;i>=0;i--)
       {
           cout<<st.s[i]<<endl;
       } 
    }
}
void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
    {
        cout<<"stack is full";
    } 
    else{
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
    {
        cout<<"stack is empty";
    }
    else{    
        x=st->s[st->top--];
    }
    return x;
}
int peek(struct stack st,int pos)
{
    int x=-1;
    if(st.top-pos+1<0)
    {
        cout<<"invalid ";
    }
    else
    {
        x=st.s[st.top-pos+1];
    }
    return x;
}
int main()
{
    struct stack st;
    create(&st);
    push(&st,34);
    push(&st,78);
    push(&st,89);
    push(&st,82);
    pop(&st);
    cout<<peek(st,3)<<endl;
    display(st);
    return 0;
}