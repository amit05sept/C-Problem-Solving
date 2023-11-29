#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 10;
    int prev2 = 0;
    int prev1 = 1;
    int curr;
    for (int i = 2; i <= n; i++)
    {
        curr = prev2 + prev1;
        prev2 = prev1;
        prev1 = curr;
    }

    cout << n << " -  " << curr << endl;

    return 0;
}