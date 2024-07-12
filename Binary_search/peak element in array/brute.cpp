# include<bits/stdc++.h>
using namespace std ;
int find(vector<int>arr){
    int n = arr.size();
    for(int i =0 ; i<n;i++){
        if((i==0 || arr[i-1]<arr[i]) && (i==n-1 || arr[i]>arr[i+1])){
            return i ;
        }
    }
   return -1 ;
}
int main (){
    vector<int>arr={1,2,3,4,5,6,7,8,5,1};
    int ans = find(arr);
    cout<<ans;
}