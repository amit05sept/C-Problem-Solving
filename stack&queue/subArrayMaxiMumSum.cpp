// subArrayMaximumSum.cpp

#include<bits/stdc++.h>
using namespace std;
long long subArrayMaximumSum(vector<int>&A){
    int n=A.size();
    stack<int>st;
    stack<int>st2;
    vector<long long>leftNge(n,0),rightNge(n,0);
    for(int i=0;i<n;i++){
        while(!st.empty() && A[st.top()]<=A[i])
            st.pop();
        if(st.empty())
            leftNge[i]=i+1;
        else
            leftNge[i]=i-st.top();
        st.push(i);
    }
    
    for(int i=n-1;i>=0;i--){
        while(!st2.empty() && A[st2.top()]<A[i])
            st2.pop();
        if(st2.empty())
            rightNge[i]=n-i;
        else
            rightNge[i]=st2.top()-i;
        st2.push(i);
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        sum += ((leftNge[i]) * A[i]*(rightNge[i]));
    }
    return sum; 
    }
    long long sumSubarrayMins(vector<int>& A) {
       int n=A.size();
    stack<int>st;
    stack<int>st2;
    vector<long long>leftNge(n,0),rightNge(n,0);
    for(int i=0;i<n;i++){
        while(!st.empty() && A[st.top()]>A[i])
            st.pop();
        if(st.empty())
            leftNge[i]=i+1;
        else
            leftNge[i]=i-st.top();
        st.push(i);
    }

    for(int i=n-1;i>=0;i--){
        while(!st2.empty() && A[st2.top()]>=A[i])
            st2.pop();
        if(st2.empty())
            rightNge[i]=n-i;
        else
            rightNge[i]=st2.top()-i;
        st2.push(i);
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        sum += ((leftNge[i]) * A[i]*(rightNge[i]));
    }


    cout<<" left \n";
    for(int i:leftNge)cout<<" "<<i<<" ";
    cout<<endl;
    cout<<"right \n";
     for(int i:rightNge)cout<<" "<<i<<" ";
    cout<<endl;
    return sum; 
    }

long long subArrayRanges(vector<int>& nums) {
        long long sum=0;
        long long miniSum = sumSubarrayMins(nums);

        int n=nums.size();
        for(int i=0;i<n;i++){
          for(int j=i;j<n;j++){
            int maxi=INT_MIN;
            int mini = INT_MAX;
            for(int k=i;k<=j;k++){
              maxi=max(maxi,nums[k]);
              mini=min(mini,nums[k]);
            }
            sum+=maxi-mini;
          }
        }
        return sum;
}
int main(){
    vector<int > A = {2,1,1,1,5,6,3,2,3};
    long long sum = subArrayMaximumSum(A) - sumSubarrayMins(A);
    cout<<sum<<endl;
    return 0;
}
