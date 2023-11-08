#include<bits/stdc++.h>
using namespace std;
void sortStack(stack<int> &s){

}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(5);
    s.push(4);
    s.push(11);
    sortStack(s);

    for(int i=0;i<s.size();i++){
        s.top();
        s.pop();
    }
}