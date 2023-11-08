//absoluteValue.cpp
#include<bits/stdc++.h>
using namespace std;
static bool absSort(int a,int b){
    cout<<a<<" - "<<b<<endl;
    return abs(a)<abs(b);
}
static bool evenSort(int a, int b){
    bool aIsEven = (a % 2 == 0);
    bool bIsEven = (b % 2 == 0);

    if (aIsEven && !bIsEven) {
        // a is even, b is odd, so a comes first
        return true;
    } else if (!aIsEven && bIsEven) {
        // a is odd, b is even, so b comes first
        return false;
    } else {
        // Both are either even or odd, compare them normally
        return a < b;
    }
}

// static bool evenSort(int a,int b){
//     if(a%2==0){
//         if(b%2==0){
//             return a<b;
//         }
//     }
//     return false;
// }
int main(){
    int arr[]={-5,-6,2,0,-7,9,10,2,3,-4,33,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,evenSort);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}