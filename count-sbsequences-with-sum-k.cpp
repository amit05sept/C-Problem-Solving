// count sbsequences with sum k , using recursion
#include<bits/stdc++.h>
using namespace std;
int countSb(int ind , int currSum , int sum ,vector<int> &sb, int ar[], int n){
    if(ind==n){
        if(currSum==sum){
            for(auto it : sb){
                cout<<it<<" ";
            }
            cout<<endl;
            return 1;
        }
        else    
            return 0;

    }
    sb.push_back(ar[ind]);
    currSum+=ar[ind];
    int left = countSb(ind+1, currSum,sum,sb,ar,n);
    currSum-=ar[ind];
    sb.pop_back();

    int right = countSb(ind+1,currSum,sum,sb,ar,n);

    return left+right;

    
}
int countSb2(int ind , int currSum , int sum ,vector<int> &sb, int ar[], int n){
    if((ind==n) || (currSum==sum)){
        if(currSum==sum){
            for(auto it : sb){
                cout<<it<<" ";
            }
            cout<<endl;
            return 1;
        }
        else    
            return 0;

    }
    sb.push_back(ar[ind]);
    currSum+=ar[ind];
    int left = countSb(ind+1, currSum,sum,sb,ar,n);
    currSum-=ar[ind];
    sb.pop_back();

    int right = countSb(ind+1,currSum,sum,sb,ar,n);

    return left+right;
}


int main(){
    int ar[]={10,0,3,4,5,11,1};
    int n= sizeof(ar)/sizeof(ar[0]);
    int sum = 10;
    vector<int>sb;
    cout<<countSb2(0,0,sum,sb,ar,n);

    return 0;
}