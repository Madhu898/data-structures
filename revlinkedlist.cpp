#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node
{
    public:
   int data;
   node *next;  
   node *pre;
   node(int val)
   {
      data=val;
      next=NULL;
      pre=NULL;
   }
};
void display(node *head)
{
   node *temp=head;
   while(temp!=NULL)
   {
      cout<<temp->data<<" ->";
      temp=temp->next;
   }
   cout<<"NULL"<<endl;
}
void insert(node* head,int val)
{
   node *n=new node(val);
   if(head==NULL)
   {
      head=n;
   }
   node *temp=head;
   while(temp->next!=NULL)
   {
      temp=temp->next;
   }
   temp->next=n;
   n->pre=temp;
}
void rev(node * head)
{
   node* temp=head;
   while(temp->next!=NULL)
   {
      temp=temp->next;
   }
   while(temp!=NULL)
   {
      cout<<temp->data<<"---";
      temp=temp->pre;
   }
   cout<<"NULL"<<endl;

}

int main()
{
   node * head= new node(1);
  /* node * f= new node(2);
   node * s= new node (3);
   head->next=f;
   f->next=s;
   display(head);
   insert(head,4);*/
 
   int n;
   cout<<"enter the number of elements "<<endl;
   cin>>n;
   while(n--)
   {
      int val;
      cout<<"enter the value "<<endl;
      cin>>val;
      insert(head,val);
   }
   display(head);
   rev(head);

   return 0;
}
