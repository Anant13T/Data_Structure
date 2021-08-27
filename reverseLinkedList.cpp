#include<iostream>
#include<string>
using namespace std;
struct node{
    string data;
    struct node *next;
};
struct node *insert(struct node*);
void display(struct node*);
void delet(struct node**head);
struct node *reverse(struct node*);
int main()
{
    node *head=new node;
    head->next=NULL;
    node *ptr=head;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ptr=insert(ptr);
    }
    ptr=head;
    head=reverse(head);
    ptr=head;
    display(ptr);
    return 0;
}
struct node *insert(struct node*ptr)
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
void delet(struct node**head)
{
    node *pre=*head;
    node *curr=*head;
    int x;
    cin>>x;
    if(*head==NULL)
    {
        cout<<"no element found";
    }
    else if(x==0)
    {
        *head=curr->next;
        free(curr);
        curr=NULL;
    }
    else{
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
struct node *reverse(struct node*head)
{
    node *pre=NULL;
    node *curr=NULL;
    while(head!=NULL)
    {
        curr=head->next;
        head->next=pre;
        pre=head;
        head=curr;
    }
    head=pre;
    return head;
}