#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int r = (n-1)/2;
    int c = r;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[r][i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i][c];
    }

    for(int i=0;i<n;i++){
        sum+=arr[i][i];
    }

    for(int i=n-1,j=0;i>=0 && j<n;i--,j++){
        sum+=arr[j][i];
    }

    sum-=(3*arr[r][c]);
    cout<<endl;
    cout<<sum<<endl;

    return 0;
}