#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool check=false;
    int num = 0;
    while(n){
        num = num*10 + n%10;
        if(num==0){
            check = false;
            break;
        }
        if(num==441 || num==41 || num == 1){
            check = true;
            num=0;
        }else{
            check = false;
        }
        n/=10;
    }
    if(check){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}