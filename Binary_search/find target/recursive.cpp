#include<bits/stdc++.h>
using namespace std ;
int value(vector<int>arr,int target,int low,int high){
    if(low>high) return -1;
    int mid =   (low  + high)/2;
    if(arr[mid]<target){
      return value(arr ,target,mid+1,high);
    }else if(arr[mid]==target)  return mid ;

    return value(arr,target,low,mid-1);
}
int binarysearch(vector<int>arr,int target){
    return value(arr,target,0,arr.size()-1);
}
int main (){
    vector<int>arr ={3,4,6,7,9,12,16,17};
    int target = 6 ;
    int ans = binarysearch(arr,target);
    if(ans == -1){
        cout<<"target is not present";
    } else {
        cout<<"target is present ";
    }
}