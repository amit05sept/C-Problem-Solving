//string concatination

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string h="hello";
    string he="he";
    // s=s+h[0];
    s.push_back(h[0]);
    s.push_back(h[1]);
    cout<<s;
    cout<<he.compare(s);
    // s.erase(s.end()-1);
    s.pop_back();
    cout<<endl<<s<<"pasdpaspd";

    return 0;

}