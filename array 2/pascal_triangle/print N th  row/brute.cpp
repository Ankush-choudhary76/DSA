#include<bits/stdc++.h>
using namespace std ;
int nCr(int n , int r){
    int res = 1;
    for(int i=0; i<r;i++){
        res = res *(n-i);
        res = res /(i+1);

    }
    return res ;
}
int pascaltriangle(int n){
    for(int col = 1 ;col<=n;col++){
        cout<<nCr(n-1,col-1)<<" "; 
    }
}

int main (){
    int n = 6 ;
     pascaltriangle(n);
}