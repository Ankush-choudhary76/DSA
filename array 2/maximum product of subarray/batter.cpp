#include<bits/stdc++.h>
using namespace std ;
int maximumproduct(vector<int>arr){
    int n = arr.size();
    int max_array = INT_MIN;
    for(int i=0;i<n-1;i++){
          int product =arr[i];
        for(int j=i+1;j<n;j++){
          
            product *= arr[j];
                     max_array = max(product,max_array); 
            
        }
         max_array = max(product,max_array); 
    }
    return max_array;
}
int main (){
    vector<int>arr= {1,2,-3,0,-4,-5};
    int ans = maximumproduct(arr);
    cout<<ans<<endl ;
}