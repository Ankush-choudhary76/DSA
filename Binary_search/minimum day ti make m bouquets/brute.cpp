#include<bits/stdc++.h>
using namespace std ;
int finddays(vector<int>arr, int r, int k,int m ){
    int cnt = 0 ; int bouquets=0 ;
    for(int i=0 ; i<arr.size();i++){
        if(arr[i]<= r){
            cnt ++;
        }else {
            bouquets += (cnt/k);
            cnt = 0;
        }
    }
     bouquets += (cnt/k);
     return bouquets>= m;
}
int minimumdays(vector<int>arr,int m ,int k){
    int maxi = INT_MIN , mini = INT_MAX;
     for(int i=0 ;i<arr.size();i++){
        maxi = max( maxi , arr[i]);
        mini = min( mini , arr[i]);
    }
    for(int i=mini ;i<=maxi;i++){
        if( finddays(arr, i ,k, m))
        return i ;
    }
    return -1 ;
}
int main (){
    vector<int>arr= {7,7,7,7,13,11,12,7};
    int m = 2 , k = 3 ;
    int result = minimumdays(arr , m , k);
    cout<<result;
}