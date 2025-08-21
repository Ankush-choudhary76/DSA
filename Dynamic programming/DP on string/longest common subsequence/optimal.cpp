# include<bits/stdc++.h>
using namespace std ; 


int longestcommonsequence(  string s1 ,string s2){
    int n = s1.size() , m = s2.size();
    vector<int>dp(m+1);
    vector<int>temp(m+1);
     for(int i=0 ; i<=m ; i++) dp[i] = 0 ;

    for(int ind1=1 ; ind1<=n ; ind1++){
        for(int ind2=1 ; ind2<=m ; ind2++){
             if(s1[ind1]= s2[ind2]){ 
             temp[ind2] = 1+dp[ind2-1];
             }else{
                 temp[ind2] = max(dp[ind1-1] , temp[ind2-1]);
             }
        }
        dp = temp ; 
    }
     return dp[m];
}
int main(){
    string s = "acd" , s2 = "ced";
    cout<<longestcommonsequence(s,s2);
}
