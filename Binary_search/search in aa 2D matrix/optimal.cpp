#include<bits/stdc++.h>
using namespace std ;
bool search_2d(vector<vector<int>>arr ,int t ){
    int n = arr.size() , m = arr[0].size();
   int low = 0 , high = n*m - 1 ;

   while(low<=high){
    int mid = (low + high)/2;
    int row = mid/m , col =mid % m;
    if(arr[row][col]== t) return true ;
    else if(arr[row][col] > t) high = mid -1 ;
    else low +1 ;
   }
     return false ;
}
int main(){
    vector<vector<int>>arr={{3,4,7,9},{12,13,16,18},{20,21,23,29}};
    int target = 13 ;
    search_2d(arr , target)== true ? cout<<"true" : cout<<"false";
  
}