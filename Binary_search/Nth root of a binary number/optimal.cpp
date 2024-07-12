#include<bits/stdc++.h>
using namespace std ;
int find(int n ,int mid , int r  ){
    long long ans = 1 ;
    for(int i=1;i<=n;i++){
        ans = ans * mid ;
        if(ans > r ) return 2 ;
       
    }
      if(  ans == r ) return 1;
    return 0 ;
}
int Nth_root(int n , int m){
    int low = 0 , high = m;
    while(low <= high  ){
        int mid = (low + high)/2;
        int val = find(n , mid ,m);
        if(val == 1) return mid ;
        else if (val == 2) high = mid -1;
        else low = mid + 1 ;
    }
    return -1 ;
}
int main (){
    int n = 3 , m = 27 ;
    int ans = Nth_root(n ,m);
    cout<<ans ;
}