#include<bits/stdc++.h>
using namespace std ;

int substringXORwithK(vector<int>arr,int k ){
    int n = arr.size();
    int xrr =0;
    int count= 0;
    unordered_map<int ,int>mpp;
    mpp[xrr]++ ;    // (0,1)
    for(int i=0;i<n;i++){
        xrr ^=arr[i];
        int x = xrr^k;
        count +=mpp[x];
        mpp[xrr]++;
    }
    return count;
}

int main (){
    vector<int>arr={4,2,2,6,4};
    int k = 6 ;
    int ans = substringXORwithK(arr,k);
    cout<<ans;
}