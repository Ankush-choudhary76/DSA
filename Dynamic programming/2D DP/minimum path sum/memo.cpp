#include<bits/stdc++.h>
using namespace std ; 
int minSumPath(int n , int m , vector<vector<int>>&a  , vector<vector<int>>&dp){
    if(n <0 || m <0) return 1e9;
     if(dp[n][m]!=-1) return dp[n][m];
    if(n==0 && m== 0 ) return a[n][m];
    int left = a[n][m]+ minSumPath(n, m-1, a, dp);
    int up = a[n][m]+minSumPath (n-1 , m,a, dp);
      return dp[n][m]= min (left , up); 

}
int  f (int n , int m , vector<vector<int>>a){
    vector<vector<int>>dp(n,vector<int>(m,-1));
    return minSumPath(n-1,m-1, a , dp );
}
int main() {
    vector<vector<int>> matrix{
        {5, 9, 6},
        {11, 5, 2}
    };

    int n = matrix.size();
    int m = matrix[0].size();

    cout << "Minimum sum path: " << f(n, m, matrix) << endl;
    return 0;
}
