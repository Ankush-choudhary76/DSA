#include<bits/stdc++.h>
using namespace std ;
int  coinchangr(int ind, int  tar , vector<int>&arr) {
    if(ind ==0){
        return tar%arr[0] == 0 ; 
    }
    int nt = coinchangr(ind-1 , tar , arr);
    int t = 0 ;
    if(arr[ind]<= tar ){
        t = coinchangr(ind , tar - arr[ind] , arr);
    }
    return  nt + t ; 
}
int main (){
    vector<int>arr = {1,2,3} ;
    int tar = 4 ;
    cout<<coinchangr(arr.size()-1 , tar , arr) ; 
}
