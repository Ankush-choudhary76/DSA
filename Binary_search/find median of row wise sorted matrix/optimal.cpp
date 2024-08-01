#include<bits/stdc++.h>
using namespace std ;
int upperbound(vector<int>arr , int x ,int m ){
    int n = arr.size();
    int low = 0 , high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]>x) {
            ans = mid ;
            high = mid -1 ;
        }else low = mid +1 ;
    }
    return ans ;
}
int countsmallequal(vector<vector<int>>arr , int n ,int m , int x ){
    int cnt =0 ;
    for(int i=0 ; i<n;i++){
        cnt +=  upperbound(arr[i], x ,m);
    }
    return cnt ;
}
int median(vector<vector<int>>arr, int n , int m){
    int low = INT_MAX , high= INT_MIN;
    for(int i =0 ; i<n;i++){
        low = min(low , arr[i][0]);
        high = max(high , arr[i][n-1]);
    }
    int req = (n*m)/2;
    while(low<=high){
        int mid = (low + high)/2;
        int smallequal = countsmallequal(arr,n, m, mid);
        if(smallequal <= req) low = mid+1;
        else high = mid-1 ;
    }
    return low ;
}


int  main(){
    vector<vector<int>>arr={
        {1,2,3,4,5},
        {8,9,11,12,13},
        {21,23,25,27,29}
        };
        int n = arr.size() , m = arr[0].size();
        int ans = median(arr, n ,m );
        cout<<ans ;
}