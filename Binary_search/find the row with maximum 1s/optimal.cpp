#include<bits/stdc++.h>
using namespace std ;

int lowerbound(vector<int>arr, int n , int x){
    int low =0 , high = n-1 ;
    int ans = n;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] >= x ) {
             ans = mid ;
            high = mid-1; 
        }
        else low = mid +1 ;
    }
    return ans ;
}
int maxrow(vector<vector<int>>matrix ){
    int n = matrix.size() , m = matrix.size();
    int index =0 , max_cnt=0;
     for(int i = 0 ; i<n;i++){
            int cnt_one = m - lowerbound(matrix[i], m , 1 ) ;
            if(cnt_one > max_cnt){
                index = i; max_cnt = cnt_one;
            }
     }
     return index;
}
int main (){
    vector<vector<int>>matrix{{0,0,1,1,1},{0,0,0,0,0},{0,1,1,1,1},{0,0,0,0,0},
                                {0,1,1,1,1}};                  
     int ans = maxrow(matrix );
     cout<<ans ;                           
}