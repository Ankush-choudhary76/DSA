#include<bits/stdc++.h>
using namespace std ;
int  coinchangr(int n, int  tar , vector<int>&arr) {
   
    vector<int>dp(tar+1, 0 );
    vector<int>temp(tar+1 , 0 );
    for(int i= 0 ; i<= tar ; i++){
        if(i % arr[0] == 0) {
            dp[i] = 1 ; 
        }
    }
     for(int ind = 1 ; ind < n ; ind ++ ){
        for(int target = 0 ; target <=  tar ; target++){
               int nt = dp[target];
               int take = 0 ;
               if(arr[ind]<= target ){
                take = temp[target - arr[ind]] ; 
               }
               temp[target] = nt + take  ; 
         }
         dp = temp ; 
    }
    return dp[tar] ; 
}
int main (){
    vector<int>arr = {1,2,3} ;
    int tar = 4 ;
    cout<<coinchangr(arr.size() , tar , arr) ; 
}
