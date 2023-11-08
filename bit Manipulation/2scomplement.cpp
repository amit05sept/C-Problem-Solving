#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=18;
    // int mask = (n&((~n)+1));// right most set bit mask.
    // cout<<mask<<endl;
    cout<<(n & (-n));
    return 0;

}