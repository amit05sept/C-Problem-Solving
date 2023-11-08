#include<bits/stdc++.h>
using namespace std;

int maxWiggleSize=0;
void subsequence(int ind, vector<int>&sb,int ar[],int n){
    if(ind>=n){
        for(int i=0;i<sb.size();i++){
         cout<<" "<<sb[i]<<" ";

        }
        cout<<endl;

    // cheking for wiggle sequence
    if(sb.size()>maxWiggleSize){
        bool isWiggle=false;
        for(int i=0;i<sb.size()-1;i++){
            if(isPos)
        }
    }

        return;
    }

    // take condition
    sb.push_back(ar[ind]);
    subsequence(ind+1,sb,ar,n);
    sb.pop_back();

    //not take condition
    subsequence(ind+1,sb,ar,n);
}

int main(){
    int ar[]={1,2,3,4,5};
    vector<int>sb;
    subsequence(0,sb,ar,5);


    return 0;
}