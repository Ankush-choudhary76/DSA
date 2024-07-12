# include<bits/stdc++.h>
using namespace std ; 
bool cowweplace(vector<int>arr, int dis , int cowes){
     int cntcows = 1 ; 
    int last = arr[0];
    for(int i=1 ;i<arr.size();i++){
        if(arr[i]-last >= dis){
            cntcows ++ ;
            last = arr[i];
        }
        if(cntcows>= cowes) return true ;
    }
    return false ;
}
int aggresive (vector<int>arr,int cowes){
    int n  = arr.size();
   sort(arr.begin(),arr.end());
   int limit = arr[n-1] - arr[0];
   for(int i = 1 ; i<=limit;i++){
    if(cowweplace(arr, i , cowes)==false){
        return i-1 ;
    }
   }
   return limit ;
}
int main (){
    vector<int>arr={0,3,4,7,10,9};
    int cows = 4 ;
    int result = aggresive(arr , cows);
    cout<<result ;
}