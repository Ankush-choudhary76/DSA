#include<bits/stdc++.h>
using namespace std ;
int countwaysuntit(int i , int j,vector<vector<int>>&dp ){
    if(i == 0 && j==0) return 1 ;
    if (i<0 || j <0) return 0 ;
    if(dp[i][j] != -1) return dp[i][j];
    int up = countwaysuntit(i-1 , j,dp );
    int left = countwaysuntit(i , j-1,dp);
    return  dp [i][j]= up  + left ; 
}
int countways  (int m, int n ){
    vector<vector<int>>dp(m,vector<int>(n,-1));
    return countwaysuntit( m-1 ,  n-1 , dp);
}
int main(){
    int m = 3 ;
    int n = 2 ;
    cout<<countways(m,n)<<endl;
}