#include<bits/stdc++.h>
using namespace std ;
int lower(vector<int>arr,int x ,int n){
    int low =0 , high = n-1,ans = -1;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]>=x){
            ans = mid;
            high = mid-1;
        }else  low = mid+1;
        
    }
    return ans ;
}
int upper(vector<int>arr,int x,int n){
   int  low = 0, high = n-1,ans = -1;
   while(low<=high){
    int mid = (low + high)/2;
    if(arr[mid]>x){
        ans = mid;
        high = mid-1;
    }
    else  low = mid+1;
   
   }
   return ans ;
}
pair<int,int>findpair(vector<int>arr,int x){
    int n = arr.size();
    int lb = lower(arr,x,n);
    if(lb == -1) return {-1,-1};
    int up = upper(arr,x,n);
    return { lb ,up-1 };
}
int main(){
    vector<int>arr={2,3,4,6,8,8,8,11,13};
    int x =  8;
    pair<int,int>ans = findpair(arr,x);
     cout<<ans.first<<" "<<ans.second<<endl;
    int r = ans.second - ans.first+1;
    cout<<r<<endl;
}