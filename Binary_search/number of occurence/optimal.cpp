#include<bits/stdc++.h>
using namespace std ;
int fir(vector<int>arr ,int n ,int x ){
    int low =0 , high =n-1 , ans = -1;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] == x) {
             ans = mid ; high = mid-1; 
        }else if (arr[mid]<x) low = mid +1;
        else  high = mid -1 ;
    }
    return ans ;
}
int las(vector<int>arr,int n ,int x){
    int low = 0  , high = n-1 , ans = -1 ;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x) {ans = mid ; low = mid +1;
        } else if( arr[mid]< x)   low = mid+1;
        else  high = mid -1;
    }
    return ans ;
}
pair<int,int>fandlpositon(vector<int>arr,int n ,int x ){
    int f = fir(arr,n ,x);
    if(f==-1)return {-1,-1};
    int l = las(arr,n ,x);
    return {f,l};
}
int find(vector<int>arr,int n ,int x ){
    pair<int,int>pp= fandlpositon(arr,n,x);
    return pp.second - pp.first + 1 ;
}
int main (){
    vector<int>arr= {1,1,1,2,2,3,3,3};
    int n = arr.size() ; int x = 3 ;
   int count = find(arr,n,x);
    cout<<count;
}