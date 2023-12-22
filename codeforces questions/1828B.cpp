#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int b;
        int ans =1;
        for(int i=1;i<=n;i++){
            cin>>b;
            if(abs(b-i)!=0){
                ans = __gcd(ans ,abs(b-i));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}