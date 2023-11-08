#include<bits/stdc++.h>
using namespace std;
// this function will find the first value
// which is smaller than  the value specified
int binarySearch(vector<int>& v, int val ){
    int n = v.size();
    int low = 0 ,high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(v[mid]<val && v[mid-1]==val)return mid;
        if(v[mid]>=val){
            low=mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low; 
}
int main(){
    int n, k;
    cin>>n>>k;
    int cnt=0;
    vector<int> scores;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        scores.push_back(x);
    }

    if(scores[k-1]==0){
        cnt = binarySearch(scores, 1);
    }
    else cnt = binarySearch(scores, scores[k-1]);
    
    cout<<cnt;
    return 0;
}