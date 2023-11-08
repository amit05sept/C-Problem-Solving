#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=70;
    int i=7;
    int mask=(1<<(i-1));
    cout<<((num&mask)==0?0:1);


    mask = ~(1<<(i-1));
        cout<<(num&mask);
    return 0;
}