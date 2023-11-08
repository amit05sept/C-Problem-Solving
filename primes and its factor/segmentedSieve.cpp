#include <iostream>
using namespace std;
#define N 100000
int sieveArr[N+1]={0};
vector<int> primes;

//simple sieve 
void sieve(){
	for(long long i=2;i<=N;i++){
		//mark non prime as 1
		if(sieveArr[i]==0){
			primes.push_back(i);
			//mark its multiple
			for(long long j=i*i;j<=N;j+=i){
				sieveArr[j]=1;
			}
		}
	}
}


int main() {
	//precompute
	sieve();
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>m>>n;
		vector<int>segment(n-m+1,0);
		//iterate over all primes mark multiples of prime in segment array as non prime
		for(auto p:primes){
			//stop loop if prime is larger than root n
			if(p*p>n){
				break;
			}
			int start = (m/p)*p;
			
			//don't start from 0, instead 2*prime;
			if(p>=m and p<=n){
				start=2*p;
			}
			for(int j=start;j<=n;j+=p){
				if(j<m){
					continue;
				}
				//non prime
				segment[j-m]=1;
				
			}
		}
		//loop over the number m...n and print the primes
		for(int i=m;i<=n;i++){
			if(segment[i-m]==0 and i!=1){
				cout<<i<<endl;
			}
			
		}
		cout<<endl;
	}//while ends
	
	return 0;
}