#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string input;
    ifstream ifile;
    ifile.open("inputr");

    if (!ifile)
    {
        cout << "error: cannot open input file";
        return 0;
    }

    // while(!ifile.eof()){
    //     getline(ifile,input);
    //     cout<<input<<"\n";
    // }
    // ifile.close();
    while (getline(ifile, input))
    {
        cout << input << endl;
    }
    ifile.close();
    return 0;
}