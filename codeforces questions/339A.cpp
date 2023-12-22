#include <bits/stdc++.h>
using namespace std;
/*
int main(){
    string s;
    cin>>s;
    vector<char> ar;
    for(char c:s){
        if(isdigit(c)){
            ar.push_back(c);
        }
    }

    sort(ar.begin(),ar.end());
    int n = s.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(isdigit(s[i])){
            s[i]=ar[j++];
        }
    }
    cout<<s;
    return 0;
}

*/

int main()
{
    string s;
    cin >> s;

    int c1 = 0, c2 = 0, c3 = 0;
    for (char c : s)
    {
        if (c == '1')
            c1++;
        else if (c == '2')
            c2++;
        else if (c == '3')
            c3++;
    }
    string t = "";
    for (int i = 0; i < c1; i++)
        t += "1+";
    for (int i = 0; i < c2; i++)
        t += "2+";
    for (int i = 0; i < c3; i++)
        t += "3+";
    // poping the last character
    t.pop_back();

    cout << t << endl;

    return 0;
}