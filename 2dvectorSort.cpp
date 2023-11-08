#include <bits/stdc++.h>
using namespace std;
bool sortCol(const vector<int>& a, const vector<int>& b){
    return a[0] < b[0];
}

int main()
{
    vector<vector<int>> arr{{1, 5, 13},  {10, 4, 6},{7, 2, 9}};
    for (auto a : arr)
    {
        for (int i : a)
        {
            cout << i;
        }
        cout << endl;
    }
    
    sort(arr.begin(), arr.end(), sortCol); // NlogN 
    cout<<"\nafter sort\n\n";

    for (auto a : arr)
    {
        for (int i : a)
        {
            cout << i;
        }
        cout << endl;
    }
    // cout<<"hello";
    return 0;
}
// 2dvectorSort.cpp