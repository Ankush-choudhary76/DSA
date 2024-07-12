#include<bits/stdc++.h>
using namespace std ;
int binarysearch(vector<int>arr,int target){
    int n =arr.size();
    int low = 0;
    int high  = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target) return mid ;
        else if (arr[mid]<target) low = mid+1;
        else  high = mid -1;
    }
    return -1;
}

int main(){
    vector<int>a={3,4,6,7,9,12,16,17};
    int target = 6;
    int ans = binarysearch(a,target);
    if(ans==-1){
        cout<<"target not present";

    }else{
        cout<<"target is present ";
    }
}