#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n =7 ;
    int arr []={2,2,3,3,1,2,2};
    for(int i=0;i<n;i++){
        int count =0 ;
        for(int j=0 ;j<n;j++){

        
        if(arr[i]==arr[j]){
            count++;
        }
        if(count>n/2) cout<< arr[i];

        }

    }
}