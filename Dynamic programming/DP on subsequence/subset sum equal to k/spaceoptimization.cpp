#include<bits/stdc++.h>
using namespace std ;
bool subsetSUM(vector<int>&arr, int n , int k){
    vector<bool>prev(k+1 , false );
    
    prev[0] = true ;
    if(arr[0]<= k){
        prev[arr[0]] = true ;
    }
    for(int ind =1 ; ind <n; ind ++){
        vector<bool>cur(k+1,false);
        cur[0] = false ;
        for( int target = 1 ; target <= k ; target ++){
        bool not_take = prev[target];
        bool take = false ;
        if(target >= arr[ind]){
        take =  prev[target - arr[ind]] ;
        }
        cur[target] = take || not_take;
        }
        prev = cur;
    }
    return prev[k];
}
int main (){
    vector<int>arr={2,3,1,1};
    int n = arr.size();
    int target = 4 ;
     subsetSUM(arr , n, target)  ? cout<<"true " : cout<<"false";
}
