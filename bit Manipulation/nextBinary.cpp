#include<bits/stdc++.h>
using namespace std;
string binaryNextNumber(string s)
    {
       int carry=0;
       int n=s.size();
           for(int i=n-1;i>=0;i++){
          int sum = (s[i]-'0')+carry;
           if(i==n-1){
               sum = sum+1;
           }
           
          s[i]='0'+(sum%2);
           carry= sum/2;
           }
       return s;
    }
int main(){
    string s="101";
    cout<<(s[0]-'0')+1;
    // cout<<binaryNextNumber(s)<<"\n";
    return 0;
}