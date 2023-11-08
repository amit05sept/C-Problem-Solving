#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int x):data(x),next(NULL){}
   
}*top=NULL;

bool isEmpty(){
    return top==NULL;
}
void push(int x){
    Node *temp = new Node(x);
    temp->next = top;
    top=temp;
}
int pop(){
    if( top ==NULL)return -1;
    int x = top->data;
    Node *t = top;
    top = top->next;
    free(t);

    return x;
}

void display(){
    Node *p=top;
    while(p!=NULL){
        cout<<p->data<<", ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
    push(10);
    push(11);
    push(12);
    push(13);
    push(14); // last in first out.

    display();
    return 0;
}