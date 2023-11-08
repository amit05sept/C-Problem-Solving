#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node()
    {
        val = 0;
        next = NULL;
    }
    Node(int x) : val(x), next(NULL) {}
    Node(int x, Node *next) : val(x), next(next){}
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void push(int x);
    int pop();
    void display();
};

void Stack::push(int x)
{
    Node *temp = new Node(x, top);
    top=temp;

}

int Stack::pop()
{
    if (!top)
    {
        cout << "ERROR: Stack is empty!" << endl;
        return -1;
    }
    int x = top->val;
    Node *temp = top;

    top = top->next;
    delete (temp);

    return x;
}
void Stack::display()
{
    Node *temp = top;
    // cout << top->val;
    while(temp){
        cout << temp->val << "  ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    Stack st;

    st.push(10); // first added.
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14); // last added.

    // st.pop();
    st.display();


    return 0;
}