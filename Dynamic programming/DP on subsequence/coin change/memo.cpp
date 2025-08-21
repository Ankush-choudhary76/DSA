#include<bits/stdc++.h>
using namespace std ;
int  coinchangr(int ind, int  tar , vector<int>&arr , vector<vector<int>>&dp) {
    if(ind ==0){
        return tar%arr[0] == 0 ; 
    }
    if(dp[ind][tar] != -1 ) return dp[ind][tar] ; 
    int nt = coinchangr(ind-1 , tar , arr , dp );
    int t = 0 ;
    if(arr[ind]<= tar ){
        t = coinchangr(ind , tar - arr[ind] , arr ,dp );
    }
    return  dp[ind][tar] =  nt + t ; 
}
int main (){
    vector<int>arr = {1,2,3} ;
    int tar = 4 ;
    vector<vector<int>>dp(4 , vector<int>(tar+1 , -1) ) ;
    cout<<coinchangr(arr.size()-1 , tar , arr ,  dp ) ; 
}
