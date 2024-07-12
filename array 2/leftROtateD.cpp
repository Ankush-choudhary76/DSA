#include<bits/stdc++.h>
#include<iostream>
using namespace std ;
void leftreverse(int arr[],int n,int d){
        reverse(arr,arr+d);
        reverse(arr+d,arr+n);
        reverse(arr,arr+n);

}
int main (){
    int arr[7]={1,2,3,4,5,6,7};

    leftreverse(arr,7,4);

    for(int i =0 ; i<=6;i++){
        cout<<arr[i]<<",";
    }
}