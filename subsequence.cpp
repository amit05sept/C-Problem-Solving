// printing all subsequences
#include<bits/stdc++.h>
using namespace std;
int countt = 0;
void sbq(int ind , vector<int> &ds , vector<vector<int> > &ans , vector<int> &num){
    if(ind == num.size()){
        countt++;
        ans.push_back(ds);
        return;
    }
    // take condition
    ds.push_back(num[ind]);
    sbq(ind+1 , ds , ans , num);
    ds.pop_back();

    // not take condition
    sbq(ind+1 , ds , ans , num);

}

vector<vector<int> >sbqCaller(vector<int> &num){
    vector<vector<int> >ans ;
    vector<int> ds;
    sbq(0,ds , ans , num);
    return ans;
}



// Print all subsequences with sum K
void sbq2(int ind , int currSum , int sum , vector<int> &ds , vector<vector<int> > &ans , vector<int> &num){
    if(ind == num.size()){ 
        countt++;
        if(currSum == sum ){
            ans.push_back(ds);
        }
        return ;
    }
    ds.push_back(num[ind]);
    currSum += num[ind];
    sbq2(ind+1 , currSum , sum , ds , ans , num);
    currSum -= num[ind];
    ds.pop_back();

    sbq2(ind+1, currSum ,sum , ds , ans , num);
}
vector<vector<int> >sbq2Caller(vector<int> &num , int k){
    vector<vector<int> >ans ;
    vector<int> ds;
    sbq2(0,0,k,ds , ans , num);
    return ans;
}


// changin the codition of the base condition 
// segmentation fault 
void sbq3(int ind , int currSum , int sum , vector<int> &ds , vector<vector<int> > &ans , vector<int> &num){
    if(currSum == sum){ 
        countt++;
        if(currSum == sum ){
            ans.push_back(ds);
        }
        return ;
    }
    ds.push_back(num[ind]);
    currSum += num[ind];
    sbq3(ind+1 , currSum , sum , ds , ans , num);
    currSum -= num[ind];
    ds.pop_back();

    sbq3(ind+1, currSum ,sum , ds , ans , num);
}
vector<vector<int> >sbq3Caller(vector<int> &num , int k){
    vector<vector<int> >ans ;
    vector<int> ds;
    sbq3(0,0,k,ds , ans , num);
    return ans;
}


//changing the base condition of sbq2
void sbq4(int ind , int currSum , int sum , vector<int> &ds , vector<vector<int> > &ans , vector<int> &num){
    if((ind == num.size() )||(currSum == sum)){ 
        countt++;
        if(currSum == sum ){
            ans.push_back(ds);
        }
        return ;
    }
    ds.push_back(num[ind]);
    currSum += num[ind];
    sbq4(ind+1 , currSum , sum , ds , ans , num);
    currSum -= num[ind];
    ds.pop_back();

    sbq4(ind+1, currSum ,sum , ds , ans , num);
}
vector<vector<int> >sbq4Caller(vector<int> &num , int k){
    vector<vector<int> >ans ;
    vector<int> ds;
    sbq4(0,0,k,ds , ans , num);
    return ans;
}



// counting all subsequences with sum k
int sbq5(int ind ,int sum , int target, vector<int> &num){
    if(ind == num.size()){
        if(sum==target){
            return 1;
        }
        else
            return 0;
    }
    int left = sbq5(ind+1 , sum+num[ind] , target , num);

    int right = sbq5(ind+1 , sum , target , num);

    return left+right;

}
int sbq5Caller(vector<int> &num , int target){
    int countt = sbq5(0, 0 , target , num);
    return countt;
}
bool sbq6(int ind , int sum , int target , vector<int> &num ){
    if(ind == num.size()){
        if(sum == target ){
            return true;
        }
        else 
            return false;
    }
    if(sbq6(ind+1 , sum+num[ind] ,target ,num )==true){
        return true;
    }
    if(sbq6(ind+1 , sum , target , num )==true){
        return true;
    }
    
    return false;
}
bool sbq6Caller(vector<int> &num , int target ){
    return sbq6(0 , 0 , target , num);
} 
int main(){
    int ar []={1,2,3,4,5};
    int n = sizeof(ar)/sizeof(ar[0]);

    vector<int> num(ar ,ar+n);
    // vector<vector<int> > ans = sbqCaller(num);
    // vector<vector<int> > ans = sbq2Caller(num , 10);
    // vector<vector<int> > ans = sbq3Caller(num , 10); // segmentation fault 
    // vector<vector<int> > ans = sbq4Caller(num , 10);


    // printing of ans
    // for(auto it : ans){
    //     for(auto ti : it){
    //         cout<<ti<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl<<endl<<countt;



    //sbq5
    // int countt = sbq5Caller(num , 10);
    // cout<<countt;

    //sb6
    bool check = sbq6Caller(num , 11);
    if(check){
        cout<<"YEs";
    }
    else
        cout<<"NO";
    return 0;
}