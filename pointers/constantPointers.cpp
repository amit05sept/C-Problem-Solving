#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int &y = x;

    cout << x << "  -  " << y;
    cout << endl;

    // int z = 12;
    // y = &z; // error 
    // cout << y << " - " << z << endl;

    
    return 0;
}