#include<iostream>
using namespace std;
int main (){
    int arr[7]={7,4,5,9,8,2,1};
    int n=7;

    for(int i=0;i<n-1;i++){
        int min=INT32_MAX;
        int minindex=INT32_MAX;
        for(int j=i;j<=n-1;j++){
         if(min>arr[j]) {
            min=arr[j];
            minindex=j;
         }
        }
        swap(arr[i],arr[minindex]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}