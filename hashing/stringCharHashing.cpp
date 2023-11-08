#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "amAmMitT";
    int hash[52];
    for(int i=0;i<s.length();i++){
        hash[int(s[i])>=97?s[i]-6-'A':s[i]-'A']++;
    }
    char check = 'a';
    if(hash[int(check)>=97?check-6-'A':check-'A']){
        cout<<"yes it exists";
    }else{
        cout<<"no it do not exist";
    }
    return 0;
}