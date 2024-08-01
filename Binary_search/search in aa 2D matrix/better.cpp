#include<bits/stdc++.h>
using namespace std ; 
bool binaryseach(vector<int>arr , int t){
    int low = 0 , high = arr.size()-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid]== t) return true ;
        else if(arr[mid]>t) high = mid-1;
        else low = mid +1;
    }
    return false ;
}
bool search_2d(vector<vector<int>>arr ,int t ){
    int n = arr.size() , m = arr[0].size();
     for(int i=0 ; i<n;i++){
      if(arr[i][0]< t && t < arr[i][m -1] ){
        return binaryseach(arr[i],t);
      }
     }
     return false ;
}
int main(){
    vector<vector<int>>arr={{3,4,7,9},{12,13,16,18},{20,21,23,29}};
    int target = 13 ;
    search_2d(arr , target)== true ? cout<<"true" : cout<<"false";
  
}