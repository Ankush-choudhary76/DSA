#include<bits/stdc++.h>
using namespace std ;
bool binaryseach(vector<int>arr, int t){
    int low = 0 , high = arr.size();
    while(low<=high){
        int mid = (low + high )/2;
        if(arr[mid]== t) return true;
        else if(arr[mid]> t)high = mid -1;
        else low = mid +1 ;
    }
    return false ;
}
bool search_2d(vector<vector<int>>arr ,int t ){
    int n = arr.size() ;
      for(int i=0 ; i<n;i++){
        bool flag = binaryseach(arr[i], t);
        if(flag) return true ;
      }
     return false ;
}

int main(){
    vector<vector<int>>arr={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},
                           {10,13,14,17,24},{18,21,23,26}};
    int target = 14 ;
    search_2d(arr , target)== true ? cout<<"true" : cout<<"false";
  
}