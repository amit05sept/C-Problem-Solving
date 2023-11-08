#include<bits/stdc++.h>
using namespace std;
struct mycomparefunction{
    bool operator()(vector<int>& a , vector<int>& b){
        return a[0]>b[0];
    }
};
int main(){
    vector<vector<int>> m
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<vector<int>> m2
    {
        {11, 2, 3},
        {4, 52, 6},
        {700, 8, 91}
    };

    // checking for equality
    // cout<<(m==m2);

    // reverse(m.begin(),m.end());


    // sorting a 2d matrix
    sort(m2.begin(),m2.end(),mycomparefunction());
    // vector<int>as={1,2,3,4,5};
    // sort(as.begin(),as.end(),greater<int>());
    // for(auto it:as){cout<<it;}
cout<<endl;
    for(int i=0;i<m2.size();i++){
        for(int j=0;j<m2[0].size();j++){
            cout<<m2[i][j]<<"   ";
        }
        cout<<endl;
    }
    return 0;
}