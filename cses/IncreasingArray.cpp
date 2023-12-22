#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> arr(n, 0);
    for (long long i = 0; i < n; i++)
        cin >> arr[i];

    long long count = 0;
    for (long long i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            count += abs(arr[i] - arr[i - 1]);
            arr[i] = arr[i - 1];
        }
    }
    cout << count;
    return 0;
}