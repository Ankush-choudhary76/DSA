#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n=5;
    int arr[]={1,2,4,5};
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<n+1;i++){
        if(hash[i]==0){
            cout<<i<<endl;
        }
    }
}