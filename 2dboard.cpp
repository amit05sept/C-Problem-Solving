#include <bits/stdc++.h>
using namespace std;

bool Backtrack(int r, int c, string &s, string word, vector<vector<char> > &board, vector<vector<int> > &mark)
{
    if (r < 0 || r >= board.size())
    {
        return false;
    }
    if (c < 0 || c >= board[r].size())
    {
        return false;
    }
    if (s.length() == word.length())
    {
        if (word.compare(s) == 0)
        {
            return true;
        }
        return false;
    }
    // s = s + board[r][c]; // adding the character;
    if (mark[r][c] == 0)
    {
        s.push_back(board[r][c]);
        mark[r][c] = 1;
    }
    else
    {
        return false;
    }

    if (Backtrack(r, c - 1, s, word, board, mark) == true)
        return true; // left call with character at [r][c]
    if (Backtrack(r, c + 1, s, word, board, mark) == true)
        return true; // right call with character at [r][c]
    if (Backtrack(r - 1, c, s, word, board, mark) == true)
        return true; // up call with character at [r][c]
    if (Backtrack(r + 1, c, s, word, board, mark) == true)
        return true; // down call with character at [r][c]

    s.pop_back(); // removing the character;
    mark[r][c] = 0;
    if (Backtrack(r + 1, c, s, word, board, mark) == true)
        return true; // left call without character at [r][c]
    if (Backtrack(r + 1, c, s, word, board, mark) == true)
        return true; // right call without character at [r][c]
    if (Backtrack(r + 1, c, s, word, board, mark) == true)
        return true; // up call without character at [r][c]
    if (Backtrack(r + 1, c, s, word, board, mark) == true)
        return true; // down call without character at [r][c]

    // if not found return false;
    return false;
}
bool exist(vector<vector<char> > &board, string word)
{
    string s;
    vector<vector<int> > mark(6, vector<int>(6, 0));

    return Backtrack(0, 0, s, word, board, mark);
}

int main(){
    vector<vector<char> >board{
        {"A","B","C","E"},
        {"S","F","C","S"},
        {"A","D","E","E"}
    };

    string word="SEE";
    exist(board,word);
}