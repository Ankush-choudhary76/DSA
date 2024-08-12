#include<bits/stdc++.h>
using namespace std ;

      int defang(string s , string t ){
        int cnt = 0 ;
        map <char,int>mpp;
        for(int i=0 ; i<t.size();i++){
            mpp[t[i]] = i ;
        }
        for(int i=0 ; i<s.size();i++){
   
            if(mpp.find(s[i])!= mpp.end()){
             int  ans =   abs(mpp[s[i]] - i);
               cnt += ans;
            }
            
        }      
        return cnt ;
      } 
    
    int main(){
       string str = "abc";
       string  t = "bac";
       int  result = defang(str , t);
        
            cout<<result<<" ";
    
    }      