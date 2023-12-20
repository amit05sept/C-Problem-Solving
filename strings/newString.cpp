#include<iostream>
using namespace std;

class empty{
private:
int x;
public:
empty(){
    x=0;
}
void destroy(){
    delete this;
}
void print(){
    cout<<x;
}


};

int main(){
    empty e2;
    e2.destroy();
    e2.print();
    return 0;
}