#include<bits/stdc++.h>
using namespace std ;
int minSubsetSumDifference(vector<int>&arr, int n ){
      int totsum =0 ;
      for(int i=0 ; i<n ; i++){
        totsum += arr[i];
    }
    vector<vector<int>>dp(n, vector<int>(totsum +1 , -1));
    if(arr[0] <= totsum ) dp[0][totsum] = true;
    for(int ind = 1 ; ind <n ; ind ++){
        for(int target =1 ; target <= totsum ; target ++){
            bool nottake  = dp[ind -1][target];
            bool take = false ;
            if(arr[ind] <= target) take = dp [ind-1][target - arr[ind]];
            dp [ind][target] = nottake || take ; 
        }
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

