//binary representation
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    string ans;
    int N=27;
    int mask = 1;
    // cout<<(n&1)<<"\n";
    // // cout<<(n&(1<<1))<<"\n";
    // n=n>>1;
    // cout<<n;

        
       string binary ="000000000000000000000000000000";
        int i=29;
        while(N){
            if(N&1){
                binary[i]='1';
               
            }else{
                binary[i]='0';
               
            }
                i--;
                N=N>>1;
        }
        cout<<binary;
    return 0;
}
*/

//using stringstream for finding binary representation

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=22;
    // string ans;
    // cout<<(N>>0)<<"\n++++++\n";
    string ans="";
    //     for(int i=29;i>=0;i--){
    //         int p = (N>>i)&1;
    //         cout<<p<<" ---- "<<N;
    //         cout<<" #### "<<ans;
    //         ans.push_back('0'+ p);
    //         cout<<" #### "<<ans;
    //         cout<<"\n";
    //     }
    // ans.push_back();
    // ans.push_back(' '+1);
    int p=1;
    char c= '0'+p;
    string s="";
    s=to_string(p);
    // cout<<s;
    // ans.push_back(s);
    vector<string>v;
    v.push_back(s);
    // cout<<v[0];
    // cout<<"\n------\n"<<ans;
    // cout<<bitset<30>(N).to_string();

    // cout<<(N&1);

    return 0;
}