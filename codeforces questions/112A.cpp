#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;

    cin >> s1;
    cin >> s2;

    int n = s1.size();
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s2[i] || abs((int)s1[i] - (int)s2[i]) == 32)
        {
            if (i == n - 1)
            {
                cout << "0";
                break;
            }
        }
        else
        {
            char c1 = tolower(s1[i]);
            char c2 = tolower(s2[i]);
            if (c1 < c2)
            {
                cout << "-1";
            }
            else if (c1 > c2)
            {
                cout << "1";
            }
            break;
        }
    }
    cout << endl;

    return 0;
}