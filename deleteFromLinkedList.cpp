#include<iostream>
#include<string>
using namespace std;
struct node{
    string data;
    struct node *next;
};
struct node*createList(struct node*ptr);
void delet(struct node **head);
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
    delet(&head);
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
void delet(struct node **head)
{
    int x;
    cin>>x;
    node *pre=*head;
    node *curr=*head;
    if(*head==NULL)
    {
        cout<<"element not found";
    }
    else if(x==0)
    {
        *head=curr->next;
        free(curr);
        curr=NULL;
    }
    else
    {
        while(x!=0)
        {
            pre=curr;
            curr=curr->next;
            x--;
        }
        pre->next=curr->next;
        free(curr);
        curr=NULL;
    }
}