#include<bits/stdc++.h>
using namespace std ;
bool find(vector<int>&arr, int ind , int target,vector<vector<int>>&dp){
     if(target == 0 ) return true;
     if(ind == 0) return arr[0] == target ;
    if (dp[ind][target]!=-1) return dp[ind][target];
     bool not_take = find(arr, ind-1 , target , dp);
     bool take = false ;
     if(target >= arr[ind]){
        take = find(arr, ind-1 , target - arr[ind] , dp);
     }
     return  dp[ind][target] = take || not_take;
}
bool subsetSUM(vector<int>&arr, int n , int target){
    vector<vector<int>>dp(n,vector<int>(target+1,-1));
    return find(arr, n-1 , target , dp );
}
int main (){
    vector<int>arr={2,3,1,1};
    int n = arr.size();
    int target = 4 ;
     subsetSUM(arr , n, target)  ? cout<<"true " : cout<<"false";
}
