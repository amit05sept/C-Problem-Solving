#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = " world    hello how are you";
    cout << s;
    cout << '\n';
    string word;
    vector<string> ans;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ' || i + 1 == n)
        {
            if (s[i] != ' ')
                word.push_back(s[i]);
            if (word.size() != 0)
                // cout << word << '\n';
                ans.push_back(word); 
                // ans += word;
            word.clear();
        }
        else
        {
            word.push_back(s[i]);
        }
    }
s.clear();
int m=ans.size();
for(int i=m-1;i>=0;i--){
    // cout<<ans[i]<<'\n';
    s+=ans[i];
    if(i!=0)
    s+=" ";
}

cout<<s;
    return 0;
}