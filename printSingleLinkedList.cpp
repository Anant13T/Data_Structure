#include<iostream>
#include<string>
using namespace std;
struct node{
    string data;
    struct node *next;
};
struct node*createList(struct node*ptr);
void display(struct node*ptr);
int main()
{
    node *head=new node;
    head->next=NULL;
    node *ptr=head;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ptr=createList(ptr);
    }
    ptr=head;
    display(ptr);
    return 0;
}
struct node* createList( struct node*ptr)
{
    node *temp=new node;
    string v;
    cin>>v;
    temp->data=v;
    temp->next=NULL;
    ptr->next=temp;
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