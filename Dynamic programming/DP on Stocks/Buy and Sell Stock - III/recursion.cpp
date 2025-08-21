#include<bits/stdc++.h>
using namespace std ; 
int Maxprice(vector<int>arr , int ind , int buy , int n , int cap  ){
    if(ind == n || cap == 0) return 0 ; 

    int profit = 0 ;
        if(buy == 0 ){
        profit = max( 0 + Maxprice(arr , ind+1 , 0  , n , cap), 
                      -arr[ind] + Maxprice(arr , ind+1 , 1  , n , cap)) ;
        }
        if(buy == 1 ){
            profit = max( 0 + Maxprice(arr , ind+1 , 1  , n , cap), 
                        arr[ind] + Maxprice(arr , ind+1 , 0  , n , cap-1)) ;
        }
        return profit ; 
    
}
int main (){
    vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
    int n = prices.size();
    int k = 2 ; 
    cout<<Maxprice(prices ,0, 0 , n , k );
}

