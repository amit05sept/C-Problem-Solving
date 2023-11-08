#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int count=0;
    for(int i=0;i<n-1;i++){
        int maxx=INT_MIN;
        int pos;
        for(int j=i;j<n;j++){
            if(arr[j]>maxx){
                maxx=arr[j];
                pos=j;
            }
        }
        count++;
        swap(arr[i],arr[pos]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"    fdfdsfdf   "<<count;
    return 0;
}