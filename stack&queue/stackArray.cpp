#include <bits/stdc++.h>
using namespace std;
struct Stack
{
    int size;
    int top;
    int *s;

public:
    Stack(int sz)
    {
         size = sz;
         top = -1;
         s = new int[ size];
    }

    void push(int n)
    {
        if (isFull())
        {
            cout << "Stack is full";
            return;
        }
         s[++top] = n;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty";
            return -1;
        }
        int x =  s[ top--];
        return x;
    }
    bool isEmpty()
    {
        return  top == -1;
    }
    bool isFull()
    {
        return  top ==  size - 1;
    }
    int Top()
    {
        if (isEmpty())
            return -1;
        return  s[ top];
    }
    int Size()
    {
        return size;
    }
    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "Stack is empty";
            return -1;
        }
        else if (pos >= (top + 1) || pos < 0)
        {
            cout << "invalid stack position !!";
            return -1;
        }
        return s[top - pos + 1];
    }
    void print()
    {
        if (isEmpty())
            return;
        int ind = top;
        while (ind >= 0)
        {
            cout << s[ind--] << ", ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st(10);

    st.push(12);
    st.push(1);
    st.push(3);
    st.push(5);
    st.push(10);
    st.push(6);

    st.print();
    cout<<st.Top();
    cout << st.Size() << endl;
    // cout << st.peek(1) << endl;
    // cout << st.pop()<<endl;
    // st.print();

    return 0;
}