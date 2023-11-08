#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> map1, map2;
    map1['t']++;
    map1['t']++;
    map1['o']++;
    map1['c']++;

    map2['t']++;
    map2['t']++;
    map2['o']++;
    map2['c']++;

    cout << map1 == map2;
    return 0;
}