#include<iostream>
#include<string>
using namespace std;
struct node{
    string data;
    struct node *next;
};
struct node *frontAdd(struct node *ptr);
void display(struct node *ptr);
int main()
{
    node *head=new node;
    head->next=NULL;
    node *ptr=head;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ptr=frontAdd(ptr);
    }
    display(ptr);
    return 0;
}
struct node* frontAdd(struct node *ptr)
{
    node *temp=new node;
    string v;
    cin>>v;
    temp->data=v;
    temp->next=ptr;
    ptr=temp;
    return temp;
}
void display(struct node*ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
} 