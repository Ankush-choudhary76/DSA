#include<bits/stdc++.h> 
using namespace std ; 

int mincandyrequi(vector<int>arr) {
    int n = arr.size(); 
    vector<int>left(n,0) , right(n,0);
    left[0]= 1 , right[n-1]=0 ; 
    for(int i=1 ; i<n;i++){
        if(arr[i]>arr[i-1]){
            left[i] = left[i-1]+1 ; 
        }else{
            left[i] = 1 ; 
        }
    }
    for(int i=n-2 ; i>=0 ;i--){
        if(arr[i]>arr[i-1]){
            right[i] = right[i+1]+1 ; 
        }else{
            right[i]=1 ; 
        }
    }
    int sum = 0 ; 
    for(int i=0 ; i<n ; i++){
        sum += max(left[i] , right[i]);
    }
    return sum ; 
}
int main (){
    vector<int>arr={1,3,2,1};
    cout<<mincandyrequi(arr);
}
