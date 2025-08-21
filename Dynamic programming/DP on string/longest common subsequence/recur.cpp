#include<bits/stdc++.h>
using namespace std ; 

int lca(int i, int j, string s1 , string s2 ){
      if(i<0 || j<0) return 0 ; 
             
      if(s1[i]==s2[j]) {
        return 1+ lca(i-1 ,j-1 , s1,s2);
      }
      return  0+ max(lca(i-1 , j , s1,s2) , lca(i,j-1 , s1,s2));
}
int main(){
    string s = "acd" , s2 = "ced";
      int n = s.size() , m = s2.size();
    cout<<lca( n-1 , m-1 , s , s2);
}
