#include<bits/stdc++.h>
using namespace std ; 
// duplicate present ;
bool find(vector<int>arr , int k ){
    int n = arr.size();
   int   low = 0 , high = n-1 ;
    while(low<=high){
        int mid = (low + high )/2 ;
        if(arr[mid]== k ) return true;
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++ , high --;
            continue;
        }
        if(arr[low] <= arr[mid]){
            if(arr[low] <= k && k <= arr[mid]){
                   high = mid -1 ;
            }else{
                low = mid + 1 ;
            }
        }else{
            if(arr[mid] <= k && k <= arr[high]){
                low = mid +1;
            }else{
                high = mid - 1 ;
            }
        }
    }
    return false ;
}
int main (){
    vector<int>arr= {7,8,1,2,3,3,3,4,5,6};
    int k = 2 ;
    bool ans = find(arr,k);
    if(!ans){
        cout<<"false ";
    }else{
        cout<<"true";
    }
}