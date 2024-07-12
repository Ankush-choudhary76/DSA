#include<bits/stdc++.h>
using namespace std ;
bool possible(vector<int>arr,int m , int day , int k ){
    int cnt = 0 , nofB=0;
    for(int i = 0 ; i<arr.size();i++){
        if(arr[i]<=day ){
            cnt ++ ;
        }else{
            nofB +=(cnt/k);
            cnt = 0;
        }
    }
    nofB +=(cnt/k);
    return nofB >=m;
}
int minimumday(vector<int>arr,int k ,int m){
    int mini = INT_MAX , maxi = INT_MIN;
    for(int  i =0 ;i<arr.size();i++){
        mini =  min( mini , arr[i]);
          maxi = max( maxi,arr[i]);
    }
     int low = mini ,high = maxi ;
    while(low<=high){
        int mid = (low+high)/2;
         if(possible(arr,m , mid , k)){
            high = mid - 1 ;
         }else{
            low = mid + 1 ;
         }
    }
    return low ;
}
int main ( ){
    vector<int>arr= {7,7,7,7,13,11,12,7};
    int k = 3 , m =2 ;
    int result = minimumday(arr,k, m);
    if(result == -1){
        cout<<" cannot m bouquets";
    }else{
        cout<<result;
    }
}