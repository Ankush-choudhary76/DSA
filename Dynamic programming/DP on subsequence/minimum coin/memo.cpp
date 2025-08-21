#include<bits/stdc++.h>
using namespace std ;
int f (int ind  , int  t , vector<vector<int>>&dp ,vector<int>&arr){
       if(ind ==0 ){
        if(t % arr[ind]==0) {
            return t/arr[ind] ;

        }else return  1e9 ; 
     }
     if(dp[ind][t]!=-1) return dp[ind][t] ; 
     int nt = 0 + f(ind-1 , t ,dp, arr);
     int take = INT_MAX ;
     if(arr[ind]<= t ){
        take = 1+ f(ind , t - arr[ind] ,dp , arr);
     }
     return dp[ind][t] = min(take , nt ); 
}
int mincoin(int n , int t , vector<int>&arr  ){
    vector<vector<int>>dp(n , vector<int>(t+1,-1));
    int ans = f(n-1 , t , dp ,arr);
    return ans ; 
}
int main(){
    vector<int>arr={1,2,3};

    int  target = 8; 
    cout<<mincoin( arr.size() , target , arr);
}
