#include<iostream>
using namespace std;
class node
{ 
    public:
    int data;
    node*next;

};
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head=new node;
    node*second=new node;
    node*third=new node;
    head->data=1;
    head->next=second;
    second->data=3;
    second->next=third;
    third->data=4l;
    third->next=NULL;
    display(head);
    

    return 0;

}
