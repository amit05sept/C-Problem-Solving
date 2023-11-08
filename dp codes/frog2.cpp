// #include<iostream>
// #include<vector>
// #include<algorithm>
using namespace std;

int minCost(int ind,int k,vector<int>&heights,vector<int>&dp){
  if(ind==1)return 0;
  if(dp[ind]!=-1) return dp[ind];
  int minSteps=INT_MAX;
  for(int j=1;j<=k;j++){
    if(ind-j>=0){
      int jump= minCost(ind-j,k,heights,dp)+abs(heights[ind]-heights[ind-j]);
      minSteps=min(minSteps,jump);
    }
  }
  return dp[ind]=minSteps;
}
int main(){
  int N,K;
  cin>>N>>K;
  vector<int> heights(N);
  for(int i=0;i<N;i++){
    cin>>heights[i];
  }
  vector<int>dp(N,-1);
  cout<<minCost(1,K,heights,dp);
  
    
  return 0;
}