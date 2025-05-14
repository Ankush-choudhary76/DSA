#include <bits/stdc++.h>
using namespace std ;

int fibo (int n ){
    int prev = 1 ;
    int prev2 = 0 ;
    for(int i=2 ; i <=n  ;i++){
        int curl = prev + prev2;
        prev2 = prev;
        prev = curl;
    }
    return prev ; 
}
int main (){
      int n = 5;
      cout<<fibo(n);
}