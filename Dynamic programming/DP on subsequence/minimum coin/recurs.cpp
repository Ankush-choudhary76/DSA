#include<bits/stdc++.h>
using namespace std ;
int mincoin(int ind , int t , vector<int>&arr  ){
     if(ind ==0 ){
        if(t % arr[ind]==0) {
            return t/arr[ind] ;

        }else return 1e9 ; 
     }
     int nt = 0 + mincoin(ind-1 , t , arr);
     int take = INT_MAX ;
     if(arr[ind]<= t ){
        take = 1+ mincoin(ind , t - arr[ind] , arr);
     }
     return min(take , nt );
}
int main(){
    vector<int>arr={1,2,3};
    int  target = 8 ; 
    cout<<mincoin( arr.size()-1 , target , arr);
}
