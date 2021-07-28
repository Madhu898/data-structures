#include <iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int(n);
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow " << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << " the stack is empty " << endl;
            return;
        }
        top--;
    }
    void Top()
    {
        if (top == -1)
        {
            cout << "its an empty stack " << endl;
            return;
        }
        cout << arr[top] << endl;
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
    }
    void display()
    {
        int temp = top;
        while (temp != -1)
        {
            cout << arr[temp] << "\n";
            temp--;
        }
        cout << endl;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(5);
    st.push(6);
    st.pop();
    st.display();

    return 0;
}