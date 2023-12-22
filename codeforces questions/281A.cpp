#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    cout<<(char)toupper(s[0])<<s.substr(1,n-1);

    return 0;
}