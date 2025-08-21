#include<bits/stdc++.h>
using namespace std  ;
int triangle(int n , vector<vector<int>>&arr){
    vector<vector<int>>dp(n,vector<int>(n,0));
     for(int i=0 ; i<n; i++){
        dp[n-1][i] = arr[n-1][i] ; 
     }
     for(int i=n-2 ; i>=0 ; i--){
        for(int j= n-2 ; j>=0 ; j--){
            int down = arr[i][j] + dp[i+1][j];
            int dd = arr[i][j] + dp[i+1][j+1]; 
            dp[i][j] = min(down , dd);
        }
     }
     return dp[0][0] ; 
}
int main (){
    vector<vector<int>>arr{{1},
    {2,3},
    {3,6,7},
    {8,9,6,10}};
    int n =4  ; 
    cout<<triangle(n , arr);
}


