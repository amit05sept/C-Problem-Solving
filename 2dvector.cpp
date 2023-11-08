#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> AllSubsets(vector<int> arr, int n)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> output;
    output.push_back(vector<int>());
    cout << "hello this is the size of output " << output.size() << "\n";
    for (int num : arr)
    {
        vector<vector<int>> newSubsets;
        for (vector<int> curr : output)
        {
            curr.push_back(num);
            newSubsets.push_back(curr);
        }
        for (vector<int> curr : newSubsets)
        {
            output.push_back(curr);
        }
    }
    sort(output.begin(), output.end());
    return output;
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(3);
    vector<vector<int>> output = AllSubsets(arr, 4);
    for (auto curr : output)
    {
        for (auto ele : curr)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}