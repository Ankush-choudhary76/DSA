#include<bits/stdc++.h>
using namespace std  ;
int triangle(int n , vector<vector<int>>&arr){
    vector<int>dp(n,0);
     for(int i=0 ; i<n; i++){
        dp[i] = arr[n-1][i] ; 
     }
     for(int i=n-2 ; i>=0 ; i--){
        vector<int>temp(n , 0); 
        for(int j= n-2 ; j>=0 ; j--){
            int down = arr[i][j] + dp[j];
            int dd = arr[i][j] + dp[j+1]; 
            temp[j] = min(down , dd);
        }
        dp = temp ;
     }
     return dp[0] ; 
}
int main (){
    vector<vector<int>>arr{{1},
    {2,3},
    {3,6,7},
    {8,9,6,10}};
    int n =4  ; 
    cout<<triangle(n , arr);
}


