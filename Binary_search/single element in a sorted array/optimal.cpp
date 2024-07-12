#include<bits/stdc++.h>
using namespace std ; 
int find(vector<int>arr){
    int n = arr.size();
    int low =0 ,high = n-1 ;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid-1]!=arr[mid] && arr[mid]!= arr[mid +1]){
            return arr[mid];
        }
        if((mid%2==0 && arr[mid]==arr[mid+1] ) || (mid%2==1 && arr[mid-1]==arr[mid])){
            low = mid +1 ;
        }else {
            high = mid -1;
        }
    }
    return -1 ;
}
int main (){
    vector<int>arr={1,1,2,2,3,3,4,5,5,6,6};
    int ans = find( arr);
    cout<<ans ;
}