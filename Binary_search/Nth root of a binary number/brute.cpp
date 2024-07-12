#include<bits/stdc++.h>
using namespace std ;
int fac(int b , int exp ){
    int ans = 1;
    int base = b ;
    while(exp>0){
         if(exp % 2){
            exp--;
            ans = ans * base ;

         }else {
            exp = exp /2;
             base = base * base ;
         }
    }
    return ans ;
}
int find_Nthroot(int n , int m ){
    for(int i=1;i<=m;i++){
        int val = fac(i,n);
       if(val == m ){
         return i;
       }else if(val > m)   break ;
    }
    return -1 ;
}
int main (){
    int n =3 , m =27 ;
    int ans = find_Nthroot(n,m);
    cout<<ans ;
}