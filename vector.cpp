#include <bits/stdc++.h>
using namespace std;
int fact(int num)
{
    if (num <= 1)
    {
        return num;
    }
    else
    {
        return num * fact(num - 1);
    }
}
int main()
{
    // cout<<('z'-'a')+2;
    // cout<<fact(3);
    // vector<int> vec;
    // vec.reserve(5);
    // vec[0]=1;
    // vec[1]=2;
    // vec[2]=3;
    // vec[3]=4;
    // vec[4]=5;

    // // cout<<vec[0];
    // cout<<vec.size();
    // cout<<vec[0];
    // for(int i :vec){
    //     cout<<vec[i]<<" ";
    // }

    vector<vector<int> > output;
    output.push_back(vector<int>());
    cout<<output.size();
    vector<vector<int> > newSubset;
    for(auto &curr : output)
    {
        curr.push_back(1); // new vector
        cout<<output.size();
        newSubset.push_back(curr);
    }
    for(auto curr : newSubset)
    {
        output.push_back(curr);
        cout<<output.size();
    }
    cout<<"\n\n\n\n\n";
    for (auto it : output)
    {
        if (it.size() == 0)
        {
            cout << "{}\n";
            continue;
        }
        for (auto ti : it)
        {
            cout << ti;
        }
        cout << endl;
    }

    return 0;
}