#include <bits/stdc++.h>
using namespace std;

string rremove(string &s)
{   
    if (s.size() <= 1)
        return s;
    int index = 0;
    bool next = false;
    while (index < s.size())
    {
        if ((index + 1 < s.size()) && (s[index] == s[index + 1]))
        {
            int i = index;
            while (s[i] == s[index])
                ++i;
            s.erase(s.begin() + index, s.begin() + i);
            // cout<<s.size(); 
            next = true;
        }
        else
        {
            ++index;
        }
    }
    if (next)
    {   cout<<next;
        rremove(s);
    }
    return s;
}

int main()
{
    string s= "abccbccba";
    cout<<rremove(s);
    return 0;
}
