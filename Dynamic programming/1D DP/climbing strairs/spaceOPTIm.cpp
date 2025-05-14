#include <bits/stdc++.h>
using namespace std ;

int  cs (int ind  ){
    int prev = 1 ;
    int prev2 = 1 ;
    for(int i= 2 ; i<= ind ; i++){ 
     int curl = prev + prev2;
     prev2 = prev ;
     prev = curl ;
    } 
    return prev;
}
int main (){
      int n = 3;
      cout<<cs(n  );
}