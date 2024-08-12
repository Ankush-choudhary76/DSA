#include<bits/stdc++.h>
 using namespace std ;
 int mostWordsFound(vector<string>& sentences) {
  
        int maxi = 0;
        for( auto it : sentences){
          int cnt = 0;
         for( auto x : it ){
          if( x == ' ') cnt ++;
         
        }
        
        
         maxi = max (++cnt , maxi);
        }
        return maxi ;
    }
    int main (){
  vector<string> arr = {"ankush lamror choudhary", "lamror" };
  int result =  mostWordsFound(arr);
  cout<< result;
    }