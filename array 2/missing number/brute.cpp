// linear searching 
#include<bits/stdc++.h>
using namespace std    ;


int ans(vector<int>arr,int n ){
    
     for(int i=1;i<=n;i++){
          int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
}

int main (){

   vector<int>arr={1,2,4,5};
    
    int r=ans(arr,5);
    cout<<r<<endl;

   
}