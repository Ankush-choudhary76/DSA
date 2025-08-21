#include<bits/stdc++.h>
using namespace std ;

bool subsetsum(vector<int>&arr, int ind , int target,vector<vector<int>>&dp){
     if(target == 0 ) return true;
     if(ind == 0) return arr[0] == target ;
    if (dp[ind][target]!=-1) return dp[ind][target];
     bool not_take = subsetsum(arr, ind-1 , target , dp);
     bool take = false ;
     if(target >= arr[ind]){
        take = subsetsum(arr, ind-1 , target - arr[ind] , dp);
     }
     return  dp[ind][target] = take || not_take;
}
int minSubsetSumDifference(vector<int>&arr, int n ){
      int totsum =0 ;
      for(int i=0 ; i<n ; i++){
        totsum += arr[i];
    }
    vector<vector<int>>dp(n, vector<int>(totsum +1 , -1));
    for(int i=0 ; i<= totsum ; i++){
        bool dummy = subsetsum(arr,n-1 , i , dp);
    }
    int mini = 1e9 ;
    for(int i=0 ; i<= totsum ; i++){
        if(dp[n-1][i]= true ){
            int diff = abs(i - (totsum -i));
            mini = min(mini , diff);
        }
    }
    return mini ; 

}

int main (){
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();

    cout << "The minimum absolute difference is: " << minSubsetSumDifference(arr, n);

    return 0;
}

