#include<bits/stdc++.h>
using namespace std ;
int main (){
    vector<int>arr={4,2,2,6,4};
    int n = arr.size();
    int t = 6,count=0;
    for(int i =0 ; i<n;i++){
         int xor1 = 0;
         for(int j =i;j<n;j++){
            xor1 = xor1^arr[j];
            if(xor1==t){
                count++;
            }
        
         }
    }
    cout<<count;
     
   
}