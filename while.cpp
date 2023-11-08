#include<bits/stdc++.h>
using namespace std;
int ls(int key){
    return ++key;
}
int main(){
    int j=0;
    while((j=ls(j))<6){
        cout<<j;
        cout<<endl;
    }
    return 0;

}