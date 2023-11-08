//stringMap.cpp
// https://leetcode.com/problems/top-k-frequent-words/
#include<bits/stdc++.h>
using namespace std;
 static bool cmp(pair<string,int>&a , pair<string,int>&b){
        if(a.second==b.second)
            return a.first<b.first;
            return a.second > b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        if(words.size()==1)return {words[0]};
        unordered_map<string,int>map;
        int n=words.size();
        for(string & s: words){
            map[s]++;
        }
        vector<pair<string,int>>vec(map.begin(),map.end());
        sort(vec.begin(),vec.end(),cmp);

    int i=0;
    vector<string>ans;
    for(pair<string,int>& num:vec){
        if(i<k){
            i++;
            ans.push_back(num.first);
        }
        else return ans;
    }
    return ans;
    }
int main(){
    vector<string>
    unordered_map<string,int>map;

}