#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct Mycomparetor {
    bool operator()(pair<int,int>x,pair<int,int>y){
        if(x.first<y.first)
            return x<y;
    }
};

int main() {
	vector<int>v{2,5,3,7,1};
	vector<pair<int,int> >index;
	for(int i=0;i<v.size();i++){
	    cout<<"\n";
	    cout<<i<<" -> "<<v[i];
	    index.push_back(make_pair(v[i],i));
	}
	sort(index.begin(),index.end(),Mycomparetor());
	for(int i=0;i<index.size();i++){
	    cout<<"\n";
	    cout<<index[i].second<<" -> "<<index[i].first;
	}
	return 0;
}