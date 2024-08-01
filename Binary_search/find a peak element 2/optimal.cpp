#include<bits/stdc++.h>
using namespace std ;
int findindex(vector<vector<int>>arr , int n , int col){
    int maxvalue = -1 , index = -1 ;
    for(int i = 0 ; i<n;i++){
        if(arr[i][col]> maxvalue){
            maxvalue = arr[i][col];
            index  = i ;
        }
    }
    return index ;
}
vector<int>findpeak(vector<vector<int>>arr, int n , int m ){
    int low = 0 , high = n-1;
    while(low<=high){
        int mid = (low + high)/2;
        int rowind = findindex(arr, n  , mid);
        int left = mid-1 >= 0 ? arr[rowind][mid-1] : -1;
        int right  = mid+1 < m ? arr[rowind][mid+1] : -1;
        if(arr[rowind][mid] >left && arr[rowind][mid]>right) return {rowind , mid};
        else if(arr[rowind][mid]< left) high = mid-1;
        else low = mid+1;
    }
    return {-1,-1};
}
int main (){
    vector<vector<int>>arr={
        {4,2,5,1,4,5},
        {2,9,3,2,3,2},
        {1,7,6,0,1,3},
        {3,6,2,3,7,2}};
    int n = arr.size() , m = arr[0].size();
    vector<int>ans = findpeak(arr , n, m);
    for(auto it : ans){
        cout<<it<<" ";
    }
}