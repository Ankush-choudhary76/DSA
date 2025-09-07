#include<bits/stdc++.h> 
using namespace std ; 

int mincandyrequi(vector<int>arr) {
    int n = arr.size() ; 
   int sum = 1 , i= 1 ; 
   while(i<n){
    if(arr[i]==arr[i-1]){
        sum++;
        i++;
        continue;

    }
    int peak = 1 ; 
    while(i<n && arr[i]>arr[i-1]){
         peak ++ ; 
         sum +=peak ; 
         i++ ; 
    }
    int down = 1 ;
    while(i<n && arr[i]<arr[i-1]){
       sum+= down ; 
       i++; 
       down++;
    }
    if(down >peak){
        sum+= down - peak ;
    }
   }
   return sum ; 
}
int main (){
    vector<int>arr={1,3,2,1};
    cout<<mincandyrequi(arr);
}
