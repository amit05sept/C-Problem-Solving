#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1e6

//tc -> O(NloglogN)
void mark_sieve(vector<int>&sieve){

    //mark 1 and 0 as not prime
    sieve[1]=sieve[0]=0;

    //marking all the multiples of the number from 2 to n
    for(ll i=2;i<=N;i++){
        if(sieve[i]){
            for(ll j=i*i;j<=N;j+=i){
                sieve[j]=0; // mark this as not prime.
            }
        }
    }
}

int main(){

    vector<int>sieve(N,1);// filled wiht 1.
    mark_sieve(sieve);
    for(int i=0;i<=100;i++){
    // cout<<"hello";
        if(sieve[i]){
            cout<<i<<"  ";
        }
    }



    int n=101;
    cout<<" N : "<<n;
    cout<<" isprime "<<sieve[n]<<"\n";

    return 0;
}