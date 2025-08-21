#include<bits/stdc++.h>
using namespace std ;
bool subsetSUM(vector<int>&arr, int ind , int target){
     if(target == 0 ) return true;
     if(ind == 0) return arr[0] == target ;

     bool not_take = subsetSUM(arr, ind-1 , target);
     bool take = false ;
     if(target >= arr[ind]){
        take = subsetSUM(arr, ind-1 , target - arr[ind]);
     }
     return take || not_take;
}
int main (){
    vector<int>arr={2,3,1,1};
    int n = arr.size();
    int target = 4 ;
    bool ans = subsetSUM(arr , n-1, target);
    ans == true ? cout<<"true " : cout<<"false";
}
