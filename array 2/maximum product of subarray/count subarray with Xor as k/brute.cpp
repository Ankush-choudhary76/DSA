#include<bits/stdc++.h>
using namespace std ;
int main (){
    vector<int>arr={4,2,2,6,4};
    int n = arr.size();
    int t = 6,count=0;
    for(int i =0 ; i<n;i++){
         
         for(int j =i;j<n;j++){
            int xor1 = 0;
            for(int k = i ;k<=j;k++){
            xor1 = xor1^arr[k];
                
            }
            if(xor1==t)count++;
            
         }
    }
    cout<<count;
}