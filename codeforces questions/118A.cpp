#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (char c : s)
    {
        if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u'||c=='Y'||c=='y')
        {
            continue;
        }
        else
        {
            cout << "." << (char)tolower(c);
        }
    }
    cout << endl;
    return 0;
}