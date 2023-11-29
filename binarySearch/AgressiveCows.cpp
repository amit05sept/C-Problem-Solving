#include <bits/stdc++.h>
using namespace std;

bool canWePlaceCows(vector<int> &stalls , int mid , int cows){
    int cntCows=1;
    int lastPos = stalls[0];

    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-lastPos>=mid){
            cntCows++;
            lastPos = stalls[i];
        }
        if(cntCows>=cows) break;
    }

    if(cntCows>=cows)return true;
    return false;
}

int aggresiveCows(vector<int> &stalls , int n , int cows ){
    int min, max;
    sort(stalls.begin(), stalls.end());

    min=stalls[0] ;
    max = stalls[n-1];

    int low = 1;
    int high = max - min;
    while(low<high){
        int mid = low + (high-low)/2;
        if(canWePlaceCows(stalls , mid , cows)){
            low = mid +1;
        }else{
            high = mid-1;
        }
    }
    return high;
}


int main() {
	int t,n,c;
	
	cin>>t;
	while(t--){
		cin>>n>>c;
		
		vector<int> stalls(n,0);
		
		for(int i=0;i<n;i++)cin>>stalls[i];
		
        cout<<aggresiveCows(stalls, n ,c)<<endl;
	}
	return 0;
}