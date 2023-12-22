#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, vector<char>> mp;
    mp.insert({'q', {'0', 'w'}});
    mp.insert({'w', {'q', 'e'}});
    mp.insert({'e', {'w', 'r'}});
    mp.insert({'r', {'e', 't'}});
    mp.insert({'t', {'r', 'y'}});
    mp.insert({'y', {'t', 'u'}});
    mp.insert({'u', {'y', 'i'}});
    mp.insert({'i', {'u', 'o'}});
    mp.insert({'o', {'i', 'p'}});
    mp.insert({'p', {'o', '0'}});
    mp.insert({'a', {'0', 's'}});
    mp.insert({'s', {'a', 'd'}});
    mp.insert({'d', {'s', 'f'}});
    mp.insert({'f', {'d', 'g'}});
    mp.insert({'g', {'f', 'h'}});
    mp.insert({'h', {'g', 'j'}});
    mp.insert({'j', {'h', 'k'}});
    mp.insert({'k', {'j', 'l'}});
    mp.insert({'l', {'k', ';'}});
    mp.insert({';', {'l', '0'}});
    mp.insert({'z', {'0', 'x'}});
    mp.insert({'x', {'z', 'c'}});
    mp.insert({'c', {'x', 'v'}});
    mp.insert({'v', {'c', 'b'}});
    mp.insert({'b', {'v', 'n'}});
    mp.insert({'n', {'b', 'm'}});
    mp.insert({'m', {'n', ','}});
    mp.insert({',', {'m', '.'}});
    mp.insert({'.', {',', '/'}});
    mp.insert({'/', {'.', '0'}});

    char direction;
    string s;

    cin >> direction;
    cin >> s;
    cout << endl;

    for (char c : s)
    {
        if (direction == 'R')
        {
            if (mp[c][0] != '0')
                cout << mp[c][0];
        }
        else
        {
            if (mp[c][1] != '0')
                cout << mp[c][1];
        }
    }
    cout << endl;

    return 0;
}