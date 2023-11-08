#include<bits/stdc++.h>
using namespace std;
void arraysize(int arr[]){
    int m =10;
    int *p =  &m;
    cout<<sizeof(p)<<" ...  ...  .. \n";
    cout<<sizeof(arr);
}
int main(){
int arr[]={1,2,3,4,5};
cout<<sizeof(arr)<<" "<<endl;
arraysize(arr);
 }