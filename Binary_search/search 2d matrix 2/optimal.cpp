#include<bits/stdc++.h>
using namespace std ;

bool search_2d(vector<vector<int>>arr ,int t ){
    int n = arr.size() , m = arr[0].size();
     int row = 0 , col = m-1;
     while(row < n && col >= 0){
        if(arr[row][col]== t) return true;
        else if(arr[row][col]> t) col-- ;
        else  row++ ;
     }
     return false ;
}

int main(){
    vector<vector<int>>arr={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},
                           {10,13,14,17,24},{18,21,23,26}};
    int target = 14 ;
    search_2d(arr , target)== true ? cout<<"true" : cout<<"false";
  
}