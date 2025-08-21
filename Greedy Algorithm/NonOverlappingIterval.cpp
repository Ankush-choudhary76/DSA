#include<bits/stdc++.h>
using namespace std ;
 
int NonInterval(vector<vector<int>>arr){
    int  cnt = 0 , n = arr.size();
    sort(arr.begin(), arr.end(), comp);
    int last = arr[0][1];
    for(int i=1; i<n ;i++){
        if(last<=arr[i][0]){
            cnt++;
            last= arr[i][i];
        }
    }
    return n-cnt ;
}
int main(){
    vector<vector<int>>arr={{0,5},{3,4},{1,2},{5,9},{5,7},{7,9}};
    cout<<NonInterval(arr);
}
