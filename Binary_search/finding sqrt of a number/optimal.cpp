#include<bits/stdc++.h>
using namespace std ;
int find(int n ){
   int ans = 0 ;
   int low = 1 ,high = n;
   while(low<=high){
    int mid = (low + high)/2 ;
    if(mid*mid <= n ){
        low = mid +1;
        ans = mid ;
    }else{
         high = mid-1;
    }
   }
    return  ans  ;
}
int main (){
    int n = 28 ;
    int sqrt = find(n);
    cout<<sqrt;
}