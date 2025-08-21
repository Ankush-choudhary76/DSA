#include<bits/stdc++.h>
using namespace  std ; 

int fun(int ind , int buy , int n , int fee , vector<int>&arr){
    if(ind ==n ) return 0 ; 
    int profit = 0 ; 
    if(buy ==0 ){
        profit = max(0+ fun(ind+1 , 0 , n , fee , arr) , -arr[ind]+fun(ind+1 , 1 , n , fee, arr));
    }
    if(buy ==1 ){
        profit = max(0+ fun(ind+1 , 1 , n , fee , arr) , arr[ind] - fee +fun(ind+1 , 0 , n , fee, arr));
    }
    return profit ; 
}

int maximumProfit(int n, int fee,vector<int>prices){
   return fun(  0 , 0 , n , fee , prices );
} 
int main() {
    vector<int> prices = {1, 3, 2, 8, 4, 9};
    int n = prices.size();
    int fee = 2;
                                 
    cout << "The maximum profit that can be generated is " << maximumProfit(n, fee, prices) << endl;
    return 0;
}
 