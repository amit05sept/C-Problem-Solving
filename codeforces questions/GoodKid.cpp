// https://codeforces.com/contest/1873/problem/B

#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int countZeroes=0;
        int prod=1;
        int mini=INT_MAX;
       
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0)
            countZeroes++;
        }
        if(countZeroes>=2){
            cout<<0;
        }else if(countZeroes==1){
            for(int i=0;i<n;i++){
                if(arr[i]!=0)prod*=arr[i];
            }
            cout<<prod;
        }
        else{
             for(int i=0;i<n;i++){
                mini=min(arr[i],mini);
                prod*=arr[i];
             }

             prod/=mini;
             prod*=(mini+1);

             cout<<prod;
        }
        cout<<endl;

    }
    return 0;
 }