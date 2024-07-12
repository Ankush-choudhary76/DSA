#include<bits/stdc++.h>
using namespace std ;


int pascaltriangle(int n){
    int res = 1;
    cout<<res<<endl ;
    for(int i=0; i<n;i++){
        res = res *(n-i);
        res = res /(i+1);
         cout<<res<<endl ;
    }
}



int main (){
    int n = 5 ;
     pascaltriangle(n-1);
}