#include<bits/stdc++.h> 
using namespace std ; 
int fun(vector<int>arr , int n , int k , int ind , int buy ){
    if(ind ==n || k==0) return 0 ; 
    int profit = 0 ; 
    if(buy ==0 ){
    profit = max( 0 + fun(arr, n, k ,ind+1 , 0), -arr[ind]+fun(arr, n, k , ind+1 , 1));
    }
    if(buy ==1 ){
        profit = max( 0 + fun(arr, n, k ,ind+1 , 1), arr[ind]+fun(arr, n, k-1, ind+1 , 0));
    }
    return profit ; 
}
 int maximumProfit(vector<int>arr, int n , int k ){
    return fun(arr , n , k , 0 , 0 );
 }


int main() {
    vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
    int n = prices.size();
    int k = 2;

    cout << "The maximum profit that can be generated is " << maximumProfit(prices, n, k) << endl;
    return 0;
}

