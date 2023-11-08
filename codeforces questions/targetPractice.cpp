// https://codeforces.com/contest/1873/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int totalScore=0;
        char targets[11][11];
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                cin>>targets[i][j];
            }
        }
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                if(targets[i][j]=='X'){
                    if(i<=5){
                        if(j<=5)
                            totalScore+=min(i,j);
                        else 
                            totalScore+=min(i,11-j);
                    }else{
                        if(j<=5)
                            totalScore+=min(11-i,j);
                        else 
                            totalScore+=min(11-i,11-j);
                    }
                }
            }
        }
        cout<<totalScore<<"\n";
    }
    return 0;
}