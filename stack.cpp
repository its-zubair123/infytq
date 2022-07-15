#include <bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
 int data;
 struct node *next;
 node(int k)
 {
     data=k;
     next=NULL;
 }
}*head=NULL,*top=NULL;
void push()
{
    struct node *temp;
    int k,ch=1;
    while(ch==1){
    if(head==NULL)
     {
         cout<<" enter a node "<<endl;
         cin>>k;
          temp=new node(k);

         top=head=temp;
     }
   else
   {
     cout<<"enter a node "<<endl;
     cin>>k;
     temp=new node(k);
     top->next=temp;
     top=temp;
}
cout<<"press 1 to enter a node 0 to quit"<<endl;
     cin>>ch;
}
}
int pop()
{
    struct node *temp;
    temp=head;
    while(temp->next!=top)
    {
        temp=temp->next;
    }
    int k=top->data;
    temp->next=NULL;
    top=temp;
    return k;
    }
void traverse()
{
    struct node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int peek()
{
    return top->data;
}
int main(){
push();
traverse();
cout<<pop()<<endl;
cout<<endl;
cout<<peek();

}

