#include<bits/stdc++.h>
using namespace std ;
int findfirst(vector<int>arr ,int x){
    int n = arr.size();
    int low = 0,high=n-1, ans = -1;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]==x){
            ans = mid;
            high = mid-1;
        }else if(arr[mid]<x) low = mid+1;
        else high = mid + 1 ;
    }
    return ans ;
}
int findlast(vector<int>arr,int x){
    int n = arr.size();
    int low =0, high = n-1,ans =-1;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]==x){
            ans = mid ;
            low = mid+1;
        }else if(arr[mid]<x)low = mid +1;
        else high = mid-1;
    }
    return ans ;
}
pair<int,int>findpair(vector<int>arr,int x){
    int f = findfirst(arr,x);
    if( f == -1 ) return {-1,-1};
    int l = findlast(arr,x);
    return   {f,l};
}
int main(){
    vector<int>arr={2,3,4,6,8,8,8,11,13};
    int x =  8;
    pair<int,int>ans = findpair(arr,x);
     cout<<ans.first<<" "<<ans.second;

}