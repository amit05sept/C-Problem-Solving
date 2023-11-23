#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "batman";
    string b = "mantab";

    vector<int> va(26, 0), vb(26, 0);

    for (auto i : a)
    {
        va[i - 'a']++;
    }
    for (auto i : b)
    {
        vb[i - 'a']++;
    }

cout<<endl;
    if (va == vb)
        cout << "anagram" << endl;
    else
        cout << "not anagram" << endl;
    return 0;
}