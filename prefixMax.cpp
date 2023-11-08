#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={1,4,2,5,0,7,10,2,3,4};
    int n = sizeof(ar)/sizeof(ar[0]);
    int prefixMax[n];
    int sufixMax[n];

    // this is not possible
    // prefixMax = ar;
    //but this is possible in vectors.
    // vector<int> ar={1,2,3,4,5};
    // vector<int>prefixMax;
    // prefixMax = ar;

for(int i =0;i<n;i++){
    prefixMax[i]=ar[i];
    sufixMax[i]=ar[i];
}

    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        maxi = max(maxi,ar[i]);
        prefixMax[i] = maxi; 
    }
    
    
    // these two are same thing...

    // for(int i = 1; i < n; i++)
    //         prefixMax[i] = max(prefixMax[i], prefixMax[i-1]);

    maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        maxi = max(maxi , ar[i]);
        sufixMax[i] = maxi;
    }

    for(int i=0;i<n;i++){
        cout<<" - "<<prefixMax[i]<<" - ";
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<" - "<<sufixMax[i]<<" - ";
    }
    cout<<endl;

    int totalWaterTrapped = 0;
    for(int i=0;i<n;i++){
        totalWaterTrapped += (min(prefixMax[i],sufixMax[i])-ar[i]);
    }

    return 0;
}