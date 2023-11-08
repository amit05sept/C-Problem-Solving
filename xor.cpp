#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 5, 4, 5};
    int n = 5;
    // int sum=0;
    for (int i = 0; i < n; i++)
    {
        int xorr = 0;

        for (int j = i; j < n; j++)
        {
            xorr ^= arr[j];
            cout << " " << xorr << " \n ";
        }
    }
    return 0;
}