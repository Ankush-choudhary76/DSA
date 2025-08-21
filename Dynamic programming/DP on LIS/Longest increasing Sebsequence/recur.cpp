#include<bits/stdc++.h>
using namespace std ; 

int f(vector<int>&arr , int ind ,int prev_ind, int n ){
     if(ind ==n)return 0 ; 
     int len = 0 +  f(arr , ind+1 , prev_ind , n );
    if(prev_ind == -1 || arr[ind] > arr[prev_ind]){
        len = max(len , 1+ f(arr , ind+1 , ind  , n ));
    }
    return len ; 
}
int main(){
    vector<int>arr={5,4,11,1,16,8};
    int n = arr.size();
    cout<<f(arr , 0 , -1 , n );
}
