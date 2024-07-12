#include<bits/stdc++.h>
using namespace std ; 
int find(vector<int>arr){
    int ans = INT_MIN ;
    for(int i=0 ; i<arr.size();i++){
        ans = max(ans , arr[i]);
    }
    return ans ;
}
int findhours(vector<int>arr, int t){
    int  hrs = 0;
    for(int i= 0 ; i<arr.size();i++){
        hrs += ceil((double) arr[i]/(double)(t) );
    }
    return hrs ; ;
}
int findminimumHRS(vector<int>arr,int h ){
    int maxi = find(arr);
    for(int i = 1 ; i<= maxi ;i++){
        int hrs = findhours(arr, i );
        if(hrs <= h) return i ;

    }
    return maxi ;
}
int main (){
    vector<int>arr = {7,15,6,3};
    int h = 8 ;
    int ans = findminimumHRS(arr,h);
    cout<<ans;
}