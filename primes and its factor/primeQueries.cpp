#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1e6

//tc -> O(NloglogN)
void mark_sieve(vector<int>&sieve, vector<int>&querrySum){

    //mark 1 and 0 as not prime
    sieve[1]=sieve[0]=0;
    querrySum[0]=querrySum[1]=0;
    //marking all the multiples of the number from 2 to n
    for(ll i=2;i<=N;i++){
         querrySum[i]=querrySum[i-1];
        if(sieve[i]){
            for(ll j=i*i;j<=N;j+=i){
                sieve[j]=0; // mark this as not prime.
            }
            querrySum[i]+=1;
        }
    }
}


int main(){

    vector<int>sieve(N,1);// filled wiht 1.
    vector<int>querrySum(N,0);
    mark_sieve(sieve , querrySum);

    int n=11;
    cout<<" prime till "<<n<<" is "<<querrySum[n];

    return 0;
}
