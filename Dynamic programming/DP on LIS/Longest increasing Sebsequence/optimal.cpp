#include<bits/stdc++.h>
using namespace std ; 
int Lis(vector<int>arr){
    int n = arr.size();
     vector<int>dp (n+1,0);  
     vector<int>temp (n+1,0);  
    for(int ind = n-1; ind>=0 ; ind--){
    for(int prev =ind-1; prev>=-1 ; prev--){
        int Nt = 0 +  temp[prev+1];
        int take =  0 ; 
       if(prev == -1 || arr[ind] > arr[prev]){
           take =  1+ dp[ind+1];
       }
       temp[prev+1] = max(take , Nt);
    }
    dp = temp ; 
    }
    return dp[0];


}
int main(){
    vector<int>arr={5,4,11,1,16,8};
   
    cout<<Lis(arr);

    
}
