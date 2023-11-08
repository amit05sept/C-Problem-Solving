#include<bits/stdc++.h>
using namespace std;
int miniInefficiency(string serverType){
    int mini = 0;
    char pre = '-';
    for(int i=0;i<serverType.length();i++){
        if(serverType[i] =='?')continue;
        if(pre == serverType[i])continue;
        if(pre !=serverType[i]){
            if(pre!='-')
            mini++;
            pre = serverType[i];
        }
    }
    return mini;
}
int main(){
    string serverType ="1????0";
    int ineff = miniInefficiency(serverType);
    cout<<serverType<<" ineff = "<<ineff<<endl;
    return 0;
}

