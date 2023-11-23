#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int cntUpper=0,cntLower=0;
    for(int i=0;i<s.length();i++){
        if(islower(s[i])){cntLower++;}
        else if(isupper(s[i])){cntUpper++;}
    }

cout<<cntUpper<<"   -   "<<cntLower<<endl;
    if(cntUpper>cntLower){
        for(int i=0;i<s.length();i++){
            s[i] = toupper(s[i]);
        }
    }else if(cntLower>cntUpper){
         for(int i=0;i<s.length();i++){
            s[i] = tolower(s[i]);
        }
    }
cout<<endl;
    cout<<s;

return 0;
}