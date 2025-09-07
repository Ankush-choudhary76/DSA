#include<bits/stdc++.h> 
using namespace std ; 

int mincandyrequi(vector<int>arr) {
    int n = arr.size(); 
    vector<int>left(n,0) ;
    left[0]= 1  ; 
    for(int i=1 ; i<n;i++){
        if(arr[i]>arr[i-1]){
            left[i] = left[i-1]+1 ; 
        }else{
            left[i] = 1 ; 
        }
    }
    int cur  = 1 , right = 1 , sum = max(left[n-1] ,1 );
    for(int i=n-2 ; i>=0 ;i--){
        if(arr[i]>arr[i-1]){
           cur = right+1 ; 
            right = cur  ;
        }else{
            cur =1 ;
        }
        sum = sum + max(left[i] , cur);
    }
    return sum ; 
    
}
int main (){
    vector<int>arr={1,3,2,1};
    cout<<mincandyrequi(arr);
}
