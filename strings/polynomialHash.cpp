#include <bits/stdc++.h>
using namespace std;

long long compute_hash(string const &s, int i, int j)
{
    const int p = 11;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (; i <= j; i++)
    {
        hash_value = (hash_value + (s[i] - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}

long long compute_hash2(string const &s)
{
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s)
    {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}

int strStr(string haystack, string needle)
{
    // generating the needle hash
    int n = needle.size();
    long long needleHash = compute_hash2(needle);

    int i = 0, j = 0;
    while (j < haystack.size())
    {
        if (j - i + 1 < n)
            j++;
        else
        {

            // generate the hash of sub-string from i to j
            string sub = haystack.substr(i, j - i + 1);
            long long temphash = compute_hash2(sub);
            if (temphash == needleHash)
                return i;
            i++;
            j++;
        }
    }
    return -1;
}

int main()
{
    string s = "ede"; // check for de;
    string needle = "de";

    cout << strStr(s, needle) << endl;
    // cout<<compute_hash2(needle);

    return 0;
}