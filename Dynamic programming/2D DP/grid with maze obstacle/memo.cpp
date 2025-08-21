#include<bits/stdc++.h>
using namespace std ;

int func(int i, int j  ,vector<vector<int >>&a,vector<vector<int >>&dp  ){
    if(i >=0 &&   j>=0  && a[i][j] == -1 ) return 0;
    if(i==0 && j==0) return 1 ;
    if(i<0 || j <0) return 0 ;
    if (dp[i][j]!=-1) return dp[i][j];
    int up  =func(i-1 , j , a , dp );
    int left = func( i , j-1 , a , dp );
    return up + left ;

}
int countWays(int n, int m , vector<vector<int >>&matrix  ){
 vector<vector<int>>dp(n ,vector<int>(m,-1) );
 return func(n-1 , m-1, matrix , dp );
}

int main (){
    vector<vector<int>>matrix{
        {0,0,0,},
        {0,-1,0},
        {0,0,0}
    };
    int n = matrix.size() , m = matrix[0].size();
    cout<<countWays(n , m , matrix);
}
