#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //opening the file
    string information , fileName;

    cout<<"\nEnter the file name you want to open: ";
    getline(cin,fileName);

    ofstream fout(fileName);

    if(!fout){
        cout<<"Error: Couldn't open";
        return 0;
    }
        
    cout<<"\nenter the information you want to store in the file: ";    
    getline(cin,information);    
    fout<<information<<"\n";

    cout<<"\ninformation stored , CLOSING FILE !!!!";
    fout.close();
    return 0;
}