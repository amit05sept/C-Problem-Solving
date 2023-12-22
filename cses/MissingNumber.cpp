#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;

    long long e;
    for (long long i = 1; i < n; i++)
    {
        cin >> e;
        sum -= e;
    }
    cout << sum;

    return 0;
}