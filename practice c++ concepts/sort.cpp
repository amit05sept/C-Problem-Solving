#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[]={1,2,5,4,3};
    vector<int>arr={1,2,5,4,3};
    sort(arr.begin()+2,arr.end()-1);
    // sort(arr+2,arr+5);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
}