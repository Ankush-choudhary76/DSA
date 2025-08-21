#include<bits/stdc++.h>
using namespace std ;
int countways(int i , int j ){
    if(i==0 && j==0 ) return 1;
    if (i<0 || j <0) return 0 ;
    int up = countways(i-1 , j );
    int left = countways(i , j-1);
    return   up  + left ; 
}

int main(){
    int m = 3 ;
    int n = 2 ;
    cout<<countways(m-1,n-1)<<endl;
}