#include<bits/stdc++.h>
using namespace std ;
int countWays(int n, int m , vector<vector<int >>&matrix  ){
 vector<vector<int>>dp(n ,vector<int>(m,-1) );
 for(int i=0 ; i<n  ; i++){
    for(int j =0 ; j <m ; j++){
        if( matrix[i][j]==-1){
            dp[i][j]=0 ;
            continue ;
        }
        if(i==0 && j==0 ){
            dp[i][j] =1 ;
            continue ;
        };
        int up= 0;
        int left =0;
        if( i >0) up = dp[i-1][j];
        if(j>0) left = dp[i][j-1];
        
        dp[i][j] = up + left;
    }

    }
    return dp[n-1][m-1];

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
