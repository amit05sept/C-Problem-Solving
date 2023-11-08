#include<bits/stdc++.h>
using namespace std;


long long int substrAtMostKCharactersCount (string &s, int k) {
        int n=s.size();
        int i=0;
        int j=0;
        int map[26];
        int no_dist=0;
        long long res=0;
        while(j<n){

            map[s[j]-'a']++;

            if(map[s[j]-'a']==1)
                no_dist++;
            
            while(no_dist>k){
                    map[s[i]-'a']--;
                    if(map[s[i]-'a']==0)no_dist--;
                    i++;
            }
            res+=j-i+1;
            j++;
        }
        return res;
    }


    long long int substrCount (string s, int k) {
        return substrAtMostKCharactersCount(s,k)-substrAtMostKCharactersCount(s,k-1);
    }


    int main(){
        string s ="aba";
        long long ans = substrCount(s,2);
        cout<<ans;
        cout<<endl;
        return 0;
    }