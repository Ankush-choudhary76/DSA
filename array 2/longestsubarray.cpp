#include<bits/stdc++.h>
using namespace std ;
int longestsubbarray(vector<int>arr,long long k){
    int right =0 ;
    int left =0 ;
    int maxlen =0;
    long long sum = arr[0];
int n = arr.size();
while(right<n){
    while(left<=right && sum>k){
        sum -=arr[left];
        left ++;
    }
    if(sum==k){
        maxlen=max(maxlen,right-left+1);
    }
    right++;
    if(right<n) sum +=arr[right];
}
  return maxlen;
}



int main (){
    long long k=3;
    vector<int>arr={1,2,3,1,1,1,1,4,2,3};
    int r = longestsubbarray(arr,k);
    cout<<r;
}