#include<bits/stdc++.h>
using namespace std ;
int nCr(int n , int r ){
   int  res = 1; 
    for(int i =0 ; i<r;i++){
        res = res *(n-i);
        res = res / (i+1);
    }
    return res ;
}
int pascaltriangle(int n){
    for(int i =1 ; i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<nCr(i-1,j-1)<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int n = 5 ;
    pascaltriangle(n);
}