#include<bits/stdc++.h>
#include<algorithm>
using namespace std ;

int main (){
    int n=11;
    int arr[]={1,1,0,1,1,1,0,1,1,1,1};
    int count =0;
    int maxi=0;
 for(int i=0;i<n;i++){
    if(arr[i]==1){
        count++;
    //    if(count>max){
    //     max=count;
    //    }
    maxi=max(maxi,count);
    }else{
        count=0;
    }
 }
cout<<" max consecutive ones : "<<maxi;
}
