#include<bits/stdc++.h>
using namespace std ;
int f(int ind , int prev_ind , vector<int>&arr , int n ){
    if(ind == n ) return 0 ; 
    int len = 0 ; 
    len = 0 + f(ind+1 , prev_ind , arr, n );
    if(prev_ind == -1 ||  arr[ind] % arr[prev_ind]==0 && arr[ind]>arr[prev_ind]  ){
        len = max(len , 1+f(ind+1 , ind , arr , n ));
    }
    return len ; 
}

int main (){
    vector<int>arr={1,16,7,8,9};
    sort(arr.begin() , arr.end());
    int n = arr.size();
    cout<<f(0,-1, arr , n  );
}
