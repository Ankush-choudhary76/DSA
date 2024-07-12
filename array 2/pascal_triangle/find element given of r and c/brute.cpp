#include<bits/stdc++.h>
using namespace std ;

int fun(int n , int r){
    int p = 1 ;
    for(int i = 0 ;i<r;i++){
    p = p*(n-i);
    p = p/(i+1);
    }
    return p;
}

int main (){
 int n = 5 ,r=3;
 int ans = fun(n-1,r-1);
 cout<<ans<<"N";
}