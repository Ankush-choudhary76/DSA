#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n =5;
    int arr[5]={1,2,4,5};
    int sum = n * (n+1)/2;
int s2=0;
    for(int i=0;i<n;i++){
        s2+=arr[i];
    }
  cout<<sum-s2;
}