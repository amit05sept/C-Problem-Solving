#include<bits/stdc++.h>
using namespace std;
int MAX(int ar[],int n){
    if(n==0)return 0;
    if(n==1)return ar[0];
    else 
        return max(ar[0],MAX(ar+1,n-1));
}
int MIN(int ar[],int n){
    if(n==0)return 0;
    if(n==1)return ar[0];
    else 
        return min(ar[0],MIN(ar+1,n-1));
}

int main()
{
    int arr[]={1,2,10,4,-5};
    int n= sizeof(arr)/sizeof(int);
    // cout<<(arr+1)[3];
    cout<<"max = "<<MAX(arr,n);
    cout<<"\nmin = "<<MIN(arr,n);
    return 0;
}