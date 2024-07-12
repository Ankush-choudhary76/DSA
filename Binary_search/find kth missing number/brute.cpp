#include<bits/stdc++.h>
using namespace std ;
int kth_missingNO(vector<int>arr,int k){
    int n = arr.size();
    for(int i=0 ; i<n;i++){
        if(arr[i]<= k)k++;
        else break ;
    }
    return k ;
}
int main (){
    vector<int>arr={2,3,4,7,11} ;
    int k = 5 ;
    int result = kth_missingNO(arr,k);
    cout<<result ;
}