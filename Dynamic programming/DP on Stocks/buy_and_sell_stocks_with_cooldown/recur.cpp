#include<bits/stdc++.h>
using namespace std ; 

int fun(vector<int>&arr , int ind , int buy , int n ){
    if(ind >= n ) return 0 ; 

    int profit = 0  ; 
    if( buy == 0){
       profit = max(0 + fun(arr , ind+1 , 0 , n ) , -arr[ind]+ fun(arr, ind+1 , 1 , n ));
    }
    if( buy == 1){
        profit = max(0 + fun(arr , ind+1 , 1, n ) , arr[ind]+ fun(arr, ind+2 , 0 , n ));
    }
    return profit ; 
}
int stockProfit(vector<int>prices){
    int n = prices.size();
    return fun(prices , 0 ,0,n );
}


int main() {
    vector<int> prices {4, 9, 0, 4, 10};
                                 
    cout << "The maximum profit that can be generated is " << stockProfit(prices) << endl;
    return 0;
}
