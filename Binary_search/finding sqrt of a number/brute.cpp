#include<bits/stdc++.h>
using namespace std ;
int find(int n ){
     int ans = 0;
    for(int i =1 ;i<=n;i++){
       
        if(i*i<=n){
            ans = i ;
        }else break ;
    }
    return ans ;
}
int main (){
    int n = 28 ;
    int sqrt = find(n);
    cout<<sqrt;
}