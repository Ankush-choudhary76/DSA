#include<bits/stdc++.h>
using namespace std ; 

string shortest_common_super_sequence(string s1 , string s2){
    int n = s1.size() , m = s2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i= 0 ; i<=n ; i++){
        dp[i][0] = 0 ; 
    }
    for(int i= 0 ; i<= m; i++){
        dp[0][i] = 0 ; 
    }
    for(int  ind1 = 1 ; ind1<= n ; ind1++){
        for(int ind2 = 1 ; ind2 <=m ;ind2++){
           if(s1[ind1]==s2[ind2]){
            dp[ind1][ind2] = 1+dp[ind1-1][ind2-1];
           }else{
            dp[ind1][ind2] = max(dp[ind1-1][ind2] , dp[ind1][ind2-1]); 
           }
        }
    }
    int i = n , j = m ;
    string str = ""; 
    while(i>0 && j>0){
        if(s1[i-1]== s2[j-1]){
            str +=s1[i-1];
            i--;j--;
        }else if(dp[i-1][j] > dp[i][j-1]){
                 str +=s1[i-1];
                 i--;
        }else{
               str +=s2[j-1];
                 j--;
        }
    }
    while(i>0) {
        str +=s1[i-1]; 
        i--;
    }
    while(j>0){
        str += s2[j-1];
        j--;
    }
    reverse(str.begin() , str.end());
    return str ; 
}
int main(){
    string s1="brute";
    string s2 ="groot";
    cout<<shortest_common_super_sequence(s1,s2);   
}

