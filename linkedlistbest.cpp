#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
node *insert_at_begining(node *head, int val)
{
    node *n = new node(val);
    n->next = head;
    return n;
}
void insertatend(node *head, int val)
{
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void search(node *head)
{
    node *temp = head;
    int flag = 0, count = 0, key;
    cout << "enter the element to be searched in an limked list " << endl;
    cin >> key;
    while (temp != NULL)
    {
        count++;
        if (temp->data == key)
        {
            cout << "element found at " << count << " node" << endl;
            flag = 1;
            return;
        }
        temp = temp->next;
    }
    if (!flag)
        cout << "sorry element not found " << endl;
}
int totalnonodes(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void deletenode(node *head, int val)
{
    node *ptr = head;
    while (ptr->next->data != val)
    {
        ptr = ptr->next;
    }
    node *temp = ptr->next;
    ptr->next = temp->next;
    delete temp;
}
bool cyclesearch(node *head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }
}
void makecycle(node *head, int pos)
{
    node *ptr = head;
    node *temp;
    int count = 1;
    while (ptr->next != NULL)
    {

        if (count == pos)
        {
            temp = ptr;
        }
        ptr = ptr->next;
        count++;
    }
    ptr->next = temp;
}
void deletecycle(node *head)
{
    node *slow = head;
    node *fast = head;
    do
    {
        fast = fast->next->next;
        slow = slow->next;

    } while (slow != fast);
    fast = head;
    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}
int main()
{
    node *n = new node(1);
    node *s = new node(2);
    node *t = new node(3);
    node *head = n;
    n->next = s;
    s->next = t;
    t->next = NULL;
    insertatend(head, 4);
    insertatend(head, 5);
    insertatend(head, 6);
    insertatend(head, 7);
    head = insert_at_begining(head, 9);
    head = insert_at_begining(head, 10);
    insertatend(head, 11);
    display(head);
    makecycle(head, 3);
    //display(head);
    cout << cyclesearch(head) << endl;
    deletecycle(head);
    cout << cyclesearch(head) << endl;

    return 0;
}
