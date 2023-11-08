#include<bits/stdc++.h>
using namespace std;
bool ispreime(int n){
    if(n<=2)return n==2;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    // return false;
    return true;
}
int main(){
    int n=4;
    cout<<" N : "<<n;
    cout<<" isprime "<<ispreime(n)<<"\n";

    return 0;
}