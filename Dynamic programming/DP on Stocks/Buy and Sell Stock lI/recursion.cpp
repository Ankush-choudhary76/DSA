#include<bits/stdc++.h>
using namespace std ; 

int getMaxPrice(vector<int>arr , int ind  , int buy , int n ){
    if(ind == n ) return 0 ; 
    int profit =0 ; 
     if(buy == 0 ){
       profit = max(
                    0 + getMaxPrice(arr , ind+1 , 0 , n ),
                    -arr[ind]+getMaxPrice(arr , ind+1 , 1 , n )  );
     }
     if(buy == 1 ){
        profit = max(
                     0 + getMaxPrice(arr , ind+1 ,1 , n ),
                     arr[ind]+getMaxPrice(arr , ind+1 , 0, n )  );
      }
      return profit ;
}
int main(){
    vector<int>arr={7, 1, 5, 3, 6, 4};
    int n = arr.size();
    cout<<getMaxPrice(arr,0,0, n );
}
