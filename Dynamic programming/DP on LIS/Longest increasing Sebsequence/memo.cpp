#include<bits/stdc++.h>
using namespace std ; 

int f(vector<int>&arr , int ind ,int prev_ind, int n ,  vector<vector<int>>&dp ){
     if(ind ==n)return 0 ; 

     if(dp[ind][prev_ind+1]!= -1) return dp[ind][prev_ind+1] ; 

     int Nt = 0 +  f(arr , ind+1 , prev_ind , n, dp  );
     int take =  0 ; 
    if(prev_ind == -1 || arr[ind] > arr[prev_ind]){
        take =  1+ f(arr , ind+1 , ind  , n ,dp);
    }
    return dp[ind][prev_ind +1 ] =  max(Nt , take ); 
}
int Lis(vector<int>arr){
    int n = arr.size();
    vector<vector<int>>dp(n , vector<int>(n+1,-1));  
    return f(arr , 0 , -1 , n , dp );
}
int main(){
    vector<int>arr={5,4,11,1,16,8};
   
    cout<<Lis(arr);

    
}
