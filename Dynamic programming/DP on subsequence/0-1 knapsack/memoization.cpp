#include<bits/stdc++.h>
using namespace std ;
int find(int ind   , int w , vector<int>&val , vector<int>&wt , vector<vector<int>>&dp){
    if(ind == 0 ){
        if( wt[0]<= w) return val[0];
        else return 0 ; 
    }
    if(dp[ind][w] != -1 ) return dp[ind][w];
    int not_take = 0 + find(ind-1 , w , val , wt  ,dp);
    int take = INT_MIN;
    if(wt[ind] <= w){
        take = val[ind] + find(ind -1 , w - wt[ind] , val , wt ,dp );
    }
    return dp[ind][w] =  max (take  , not_take );
}
int unboundedKnapsack(int n , int w , vector<int>&val , vector<int>&wt){
   vector<vector<int>>dp(n , vector<int>(w+1, -1));
   return find(n-1 ,w , val , wt , dp   );
}
    int main() {
    vector<int> wt = {3,2,5}; 
    vector<int> val = {30,40,60};
    int W = 6;
    int n = wt.size();


    cout << "The Maximum value of items the thief can steal is " << unboundedKnapsack(n, W, val, wt) << endl;

    return 0;

 }
