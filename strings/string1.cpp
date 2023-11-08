#include <bits/stdc++.h>
using namespace std;

int main()
{
    // // 1D string
    // string str = "hello world";
    // // string str2[] = [ ["hello"], ["world"], ["amit"] ];

    // // 2d string
    // string str3[] = {".hel.low.", "wor.ld.", "am..i.t"}; // this works fine
    // cout << str3.size();
    // for (auto n : str3)
    // {
    //     for (auto i : n)
    //     {
    //         if (i != '.')
    //             cout << i << " ";
    //     }
    //     cout << "-----------------";
    // }

    // vector of strings
    // vector<string> s = {".hel.low.", "wor.ld.", "am..i.t"};
    vector<string> lines = {"         .hel.low. ", "  .ash.as.s.as"};
    // cout << s.size();
    int count=0;
    string word="";
    for (string line : lines)
    {
        int n = line.size();
        cout << n << "\n";
        for (int i = 0; i < n; i++)
        {
            cout<<++count;
            if(line[i] == '.')continue;
            if (line[i] == ' '|| i+1==n )
            {
                if (line[i] != ' ')
                    word.push_back(line[i]);


                if (word.size() > 0)
                {
                    cout << word << "\n";
                }
                word.clear();

                // cout << i;
            }
            else
            {
                word.push_back(line[i]);
            }
        }
        // cout << "\n";
    }

    return 0;
}