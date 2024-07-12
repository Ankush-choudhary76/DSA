#include<bits/stdc++.h>
using namespace std ;
int floor(vector<int>arr,int x ){
    int n = arr.size();
    int low = 0  ,high =n-1,ans = n ;
    while(low<=high){
        int mid = (low +high)/2;
        if(arr[mid]<=x){
            ans = arr[mid];
            low = mid+1;
        }else{
            high = mid -1;
        }
    }
    return ans ;
}
int ceil(vector<int>arr,int x ){
    int n = arr.size();
    int low = 0  ,high =n-1,ans = n ;
    while(low<=high){
        int mid = (low +high)/2;
        if(arr[mid]>=x){
            ans = arr[mid];
            high = mid -1;
        }else{
           
            low = mid+1;
        }
    }
    return ans ;
}
pair<int,int>getfloor(vector<int>arr,int x ){
    int f = floor(arr,x);
    int c = ceil(arr,x);
    return make_pair(f,c);
}
int main (){
    vector<int>arr={3,4,4,7,8,10};
    int x =5 ;
    pair<int,int>ans = getfloor(arr,x);
    cout<<ans.first<<" "<<ans.second;
}