#include<bits/stdc++.h>
using namespace std ; 
int unbound(int ind , int w  , vector<int>&val , vector<int>&wt ){
        if(ind ==0 )return (w/wt[0]) * val[0] ; 

       int nt = 0+ unbound(ind-1 , w , val , wt);
       int take = 0; 
       if(wt[ind]<= w ){
         take = val[ind] + unbound(ind , w - wt[ind] , val , wt) ; 
       }
       return max(take , nt );
    }
int main () {
    
    vector<int>val= {5,11,13} , wt = {2,4,6};
    int w = 10 ; 
    cout<<unbound(2 , w , val , wt );
} 
