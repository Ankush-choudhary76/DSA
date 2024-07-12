#include<bits/stdc++.h>
using namespace std ;
int findmax(vector<int>arr){
    int ans = 0 ;
    for(int i=0 ; i<arr.size();i++){
        ans = max(ans , arr[i]);
    }
    return ans ;
}
int calhours(vector<int>arr,int mid){
    int hrs = 0 ;
    for(int i=0 ; i<arr.size();i++){
        hrs += ceil((double)arr[i]/ (double)mid );
    }
    return hrs;
}
int find(vector<int>arr,int h){
    int maxi = findmax(arr);
    int low = 0 , high = maxi ; 
    while(low<=high){
        int mid = (low + high)/2;
        int timetaken = calhours(arr,mid);
         if(timetaken > h ) low = mid +1 ;
        else high = mid -1 ;
    }
    return  low  ;
}
int main(){
    vector<int>arr={7,15,6,3};
    int h = 8 ;
    int ans = find(arr,h);
    cout<<ans ;
}