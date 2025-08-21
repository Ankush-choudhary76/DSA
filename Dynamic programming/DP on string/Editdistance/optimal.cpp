#include<bits/stdc++.h>
using namespace std ; 

int Editdistance(string s1 , string s2){
 int n = s1.size() , m =s2.size();
  vector<int>dp(m+1,0);
  vector<int>temp(m+1,0);

   
    for(int j=0 ; j<=m ; j++){
       dp[j] = j ; 
    }
 
 for(int i=1 ; i<=n ; i++){
    temp[0] = i;
    for(int j =1 ; j<=m ; j++){
        if(s1[i-1]==s2[j-1]){
            temp[j] = dp[j-1];
        }else{
           temp[j] = 1+ min(dp[j-1],min(dp[j], temp[j-1]));
        }
    }
    dp=temp ; 
 }
  return temp[m];
}
int main(){
    string s1 ="horse" , s2  ="ros";
   
    cout<<Editdistance(s1,s2);
}
