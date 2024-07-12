#include<bits/stdc++.h>
using namespace std ;
  int findans(vector<int>arr,int t ){
    int n = arr.size();
    int maxi = *max_element(arr.begin(),arr.end());
    for(int i = 1 ; i<=maxi ; i++){
        int sum = 0 ;
        for(int j=0 ;j<n;j++){
            sum  += ceil((double)(arr[j])/ (double)(i));
        }
        if(sum <= t) return i;
    }
    return -1 ;
  }
int main (){
    vector<int>arr={1,2,5,9};
    int thresold = 6 ;
    int result = findans(arr,thresold);
    cout<<result;
}