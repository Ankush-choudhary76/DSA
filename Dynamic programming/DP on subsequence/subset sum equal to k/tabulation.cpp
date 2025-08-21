#include<bits/stdc++.h>
using namespace std ;
bool subsetSUM(vector<int>&arr, int n , int k){
    vector<vector<bool>>dp(n,vector<bool>(k+1,false));
    
    for(int i=0 ; i <n;i++){
        dp[i][0] = true ;
    }
    if(arr[0]<= k){
        dp[0][arr[0]] = true ;
    }
    for(int ind =1 ; ind <n; ind ++){
        for( int target = 1 ; target <= k ; target ++){
        bool not_take = dp[ ind-1 ][target];
        bool take = false ;
        if(target >= arr[ind]){
        take = dp [ind-1] [target - arr[ind]];
        }
        dp[ind][target] = take || not_take;
        }
    }
    return dp [n-1][k-1];
}
int main (){
    vector<int>arr={2,3,1,1};
    int n = arr.size();
    int target = 4 ;
     subsetSUM(arr , n, target)  ? cout<<"true " : cout<<"false";
}
