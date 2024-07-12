#include<bits/stdc++.h>
using namespace std ;
int partition(vector<int>&arr,int low ,int high){
    int i = low ;
    int j= high ;
    int pevat= arr[low];

    while(i<j){
        while(arr[i]<=pevat && i<=high){
            i++;
        }
        while(arr[j]>pevat && j>=low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}



void qs(vector<int>&arr,int low ,int high){
    if(low<high){
    int indeX = partition(arr,low ,high);
    qs(arr,low,indeX);
    qs(arr,indeX+1,high); 
    }
}
void quick(vector<int>&arr,int n){
         qs(arr,0,n);
}

int main (){
    vector<int>arr={9,8,7,6,5,4,3,2,1};
    int n = arr.size();
      quick(arr,n-1);
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
    
}
