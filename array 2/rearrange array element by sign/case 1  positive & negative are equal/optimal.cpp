#include<bits/stdc++.h>
using namespace std ;

void rearrange(vector<int>&arr){
    int n = arr.size();
    int pos =0,neg =1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            arr[pos]=arr[i];
            pos +=2;
        }else{
            arr[neg]=arr[i];
            neg +=2;
        }
    }
}

int main (){
    vector<int>arr={3,1,-2,-5,2,-4};
    rearrange(arr);
    for(auto r : arr){
        cout<<r<<endl;
    }
}