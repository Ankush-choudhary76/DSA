#include<bits/stdc++.h>
using namespace std ;
int maximumproduct(vector<int>arr){
    int n = arr.size();
    int max_array = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int product =1;
            for(int k= i;k<=j;k++){
               product *=arr[k];
               
                 max_array = max(product,max_array);
            }
            
        }
    }
    return max_array;
}
int main (){
    vector<int>arr= {2,3,-2,4};
    int ans = maximumproduct(arr);
    cout<<ans<<endl ;
}