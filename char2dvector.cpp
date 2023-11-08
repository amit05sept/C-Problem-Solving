#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<char> > board;

    vector<char> ch;
    ch.push_back('a');
    ch.push_back('a');
    ch.push_back('a');
    ch.push_back('a');
    ch.push_back('a');
    board.push_back(ch);

    vector<char> hc;
    hc.push_back('b');
    hc.push_back('b');
    hc.push_back('b');
    hc.push_back('b');
    board.push_back(hc);

    cout<<board.size();
    return 0;


}