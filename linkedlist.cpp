#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    node(int k)
    {
        data=k;
        next=NULL;
    }
}*head=NULL;
void create()
{
    struct node *temp,*cur;
    int k,ch=1;
    while(ch==1)
    {
    if(head==NULL)
    {
        cout<<"enter data "<<endl;
        cin>>k;
        head=new node(k);
        temp=head;

    }
    else
    {



            cout<<"enter data "<<endl;
            cin>>k;
            cur=new node(k);
            temp->next=cur;
            temp=cur;


        }


     cout<<"press 1 to enter new node else any no."<<endl;
        cin>>ch;
}
}

void display()
{
    struct node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int count(struct node *p)
{
 int l=0;
 while(p)
 {
 l++;
 p=p->next;
 }
 return l;
}

void insertatpos()
{

    struct node *temp,*cur;
    temp=head;
    int pos,k;
    cout<<"enter position to insert after "<<endl;
    cin>>pos;
     if(pos< 0 || pos > count(head))
 return;
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    cout<<"enter data to insert "<<endl;
    cin>>k;
    cur=new node(k);
    cur->next=temp->next;
    temp->next=cur;
}
int deleteatpos()
{
int pos;
    struct node *temp,*cur;
    temp=head;

    cin>>pos;
     if(pos< 0 || pos > count(head))
 return -1;
  for(int i=0;i<pos-2;i++)
  {
      temp=temp->next;
  }
  cur=temp->next;
  temp->next=cur->next;
  return cur->data;
}
int main()
{
    create();
    display();
    cout<<"lenght of linked list  "<<count(head)<<endl;
    insertatpos();
    display();
    cout<<deleteatpos()<<endl;
    display();
}
