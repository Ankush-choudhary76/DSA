#include<bits/stdc++.h>
using namespace std ;
int mincoin(int n , int t , vector<int>&arr  ){
           vector<vector<int>>dp(n , vector<int>(t+1 , 0 ));
           for(int i= 0 ; i<=t; i++){
            if(t % arr[0]==0 ){
                dp[0][i]= i/arr[0];
            }else{
                dp[0][i] = 1e9 ; 
            }
           }
           for( int ind = 1 ; ind<n;ind++){
            for(int target = 0 ; target <= t ; target++ ){
                int nt = dp[ind-1 ][target];
                int take = INT_MAX;
                if(arr[ind]<= target){
                    take = 1 + dp[ind][target - arr[ind]];
                }
                dp[ind][target] = min(take , nt); 
            }
        }
       return dp[n-1][t]; 
}
int main(){
    vector<int>arr={1,2,3};
    int  target = 7 ; 
    cout<<mincoin( arr.size() , target , arr);
}
