#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string>s={"flower","flowr","floght","flo"};
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
    return 0;
}