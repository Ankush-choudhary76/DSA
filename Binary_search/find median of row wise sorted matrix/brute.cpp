#include<bits/stdc++.h>
using namespace std ; 
    int median(vector<vector<int>>arr,int n , int m){
        vector<int>fir;
        for(int i=0 ; i<n;i++){
            for(int j=0 ; j<m;j++){
                fir.push_back(arr[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        return  fir[(n*m)/2];
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