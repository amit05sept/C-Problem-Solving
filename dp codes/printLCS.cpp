#include <bits/stdc++.h>
using namespace std;

// lcsLen
int lcsLen(string &s, string &t, vector<vector<int>> &dp)
{
    int n = s.size();
    int m = t.size();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i - 1] == t[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    // cout<<dp[n][m]<<endl;
    return dp[n][m];
}

// print lcs
string printLcs(string &s, string &t, vector<vector<int>> &dp, int n, int m, int lcsLength)
{

    int index = lcsLength - 1;
    int i = n, j = m;
    string ans;
    for (int i = 0; i < lcsLength; i++)
    {
        ans += 'w';
    }
    while (j > 0 and i > 0)
    {
        if (s[i - 1] == t[j - 1])
        {
            ans[index] = s[i - 1];
            index--;
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    return ans;
}

string printLcsR(string &s, string &t, vector<vector<int>> &dp, int i, int j)
{
    if (i == 0 || j == 0)
        return "";

    if (s[i - 1] == t[j - 1])
    {
        return printLcsR(s, t, dp, i - 1, j - 1) + s[i - 1];
    }
    else if (dp[i][j - 1] > dp[i - 1][j])
    {
        return printLcsR(s, t, dp, i, j - 1);
    }
    else
    {
        return printLcsR(s, t, dp, i - 1, j);
    }
}
set<string> printALLLcs(string &s, string &t, vector<vector<int>> &dp, int i, int j)
{
    if (i == 0 || j == 0)
    {
        return {""};
    }
    else if (s[i - 1] == t[j - 1])
    {
        set<string> result;
        for (const string &Z : printALLLcs(s, t, dp, i - 1, j - 1))
        {
            result.insert(Z + s[i - 1]);
        }
        return result;
    }
    else
    {
        set<string> R;
        if (dp[i][j - 1] >= dp[i - 1][j])
        {
            set<string> subResult = printALLLcs(s, t, dp, i, j - 1);
            R.insert(subResult.begin(), subResult.end());
        }
        if (dp[i - 1][j] >= dp[i][j - 1])
        {
            set<string> subResult = printALLLcs(s, t, dp, i - 1, j);
            R.insert(subResult.begin(), subResult.end());
        }
        return R;
    }
}

// making a vector to return the result
//  go to GFG for this code

vector<string> printALLLcsVector(string &s, string &t, vector<vector<int>> &dp, int i, int j)
{
    if (i == 0 || j == 0)
    {
        return {""};
    }
    else if (s[i - 1] == t[j - 1])
    {
        vector<string> result;
        for (const string &Z : printALLLcsVector(s, t, dp, i - 1, j - 1))
        {
            result.insert(result.end(), (Z + s[i - 1]));
        }
        return result;
    }
    else
    {
        vector<string> R;
        if (dp[i][j - 1] >= dp[i - 1][j])
        {
            vector<string> subResult = printALLLcsVector(s, t, dp, i, j - 1);
            R.insert(result.end(), subResult.begin(), subResult.end());
        }
        if (dp[i - 1][j] >= dp[i][j - 1])
        {
            vector<string> subResult = printALLLcsVector(s, t, dp, i - 1, j);
            R.insert(result.end(), subResult.begin(), subResult.end());
        }
        return R;
    }
}
int main()
{
    string s = "abcdef";
    string t = "dcbaef";
    int n = s.size();
    int m = t.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int lcsLength = lcsLen(s, t, dp);

    // printing LCS
    //  string lcs = printLcs(s,t,dp ,n,m,lcsLength);
    string lcs = printLcsR(s, t, dp, n, m); // recursive way

    // cout<<lcs;

    // printing ALL lcs
    //    set<string> lcsSet = printALLLcs(s, t, dp, n, m);
    vector<string> lcsSet = printALLLcsVector(s, t, dp, n, m);

    // Print the LCS strings
    for (const string &lcs : lcsSet)
    {
        cout << lcs << endl;
    }

    return 0;
}