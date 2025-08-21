#include<bits/stdc++.h>
using namespace std ; 
int f(int i , int j , string s1 , string s2){
     if(i<0) return j+1;
     if(j<0) return i+1;
    if(s1[i]==s2[j]){
        return 0+f(i-1, j-1, s1,s2);
    }
    return min( 1+f(i,j-1,s1,s2),
               min( 1+f(i-1,j,s1,s2),
                 1+f(i-1,j-1,s1,s2)));
}
int main(){
    string s1 ="horse" , s2  ="ros";
    int n = s1.size() , m =s2.size();
    cout<<f(n-1, m-1, s1,s2);
}
