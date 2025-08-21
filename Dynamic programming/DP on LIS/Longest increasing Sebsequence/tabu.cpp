#include<bits/stdc++.h>
using namespace std ; 
int Lis(vector<int>arr){
    int n = arr.size();
    vector<vector<int>>dp(n+1, vector<int>(n+1,0));  
    for(int ind = n-1; ind>=0 ; ind--){
    for(int prev =ind-1; prev>=-1 ; prev--){
        int Nt = 0 +  dp[ind+1][prev+1];
        int take =  0 ; 
       if(prev == -1 || arr[ind] > arr[prev]){
           take =  1+ dp[ind+1][ind+1];
       }
       dp[ind][prev+1] = max(take , Nt);
    }
    }

    for(auto it : dp){
        for(auto p : it ){
            cout<<p<<" ";
        }
        cout<<endl;
    }
    return dp[0][0];


}
int main(){
    vector<int>arr={5,4,11,1,16,8};
   
    cout<<Lis(arr);

    
}
