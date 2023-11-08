#include <bits/stdc++.h>
using namespace std;
bool isValidPalindrome(string s, int k)
{
    if (s.size() <= 2)
        return true;
    int i = 0;
    int j = s.size() - 1;
    int cnt = 0;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++, j--;
        }
        else
        {
            j--;
            cnt++;
        }
    }

    int cnt2 = 0;
    i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++, j--;
        }
        else
        {
            i++;
            cnt2++;
        }
    }
    if (cnt > k && cnt2 > k)
        return false;

    return true;
}
int main()
{
    string s = "acdcb";
    int k=1;
    bool result = isValidPalindrome(s,k);
    cout<<"string is palindrome after k removal of characters ? :  "<<result<<endl;
    return 0;
}