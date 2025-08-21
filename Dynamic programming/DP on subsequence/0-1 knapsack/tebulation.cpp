#include<bits/stdc++.h>
using namespace std ;

int unboundedKnapsack(int n , int maxweight , vector<int>&val , vector<int>&wt){
   vector<vector<int>>dp(n , vector<int>(maxweight+1, -1));
   for(int w = wt[0] ; w<= maxweight ; w++ ) {
         dp[0][w] = val[0];
    }
    for(int ind = 1 ; ind <n ; ind ++){
        for(int cap =0 ; cap<=maxweight ; cap++){
            int not_take =  0 + dp[ind -1][cap];
            int take = INT_MAX;
            if(wt[ind]<= maxweight){
                take =  val[ind] + dp[ind-1][cap - wt[ind]];
            }
            dp [ind][cap] = max (take , not_take);
        }
    }
    return dp[n-1][maxweight];
}
    int main() {
    vector<int> wt = {3,2,5}; 
    vector<int> val = {30,40,60};
    int W = 6;
    int n = wt.size();


    cout  << unboundedKnapsack(n, W, val, wt) << endl;

    return 0;

 }
