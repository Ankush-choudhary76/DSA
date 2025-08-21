#include<bits/stdc++.h> 
using namespace std ; 
int f( vector<int>&arr , int ind , int jump , int n ){
    if(ind>=n-1 ) return jump;
    int mini = INT_MAX;
    for(int i=1 ; i<=arr[ind]; i++){
      mini = min(mini , f(arr, ind+i , jump+1, n ));
    }
    return mini ; 
}
int main (){
vector<int>arr={2,3,1,1,4};
cout<<f(arr , 0,0 ,5 );
}
