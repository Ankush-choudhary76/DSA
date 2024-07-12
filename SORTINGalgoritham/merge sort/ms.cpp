#include<bits/stdc++.h>
using namespace std ;
void marge(vector<int>&arr,int low,int mid ,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;
        } else{
             temp.push_back(arr[right]);
        right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
          temp.push_back(arr[right]);
        right++;
    }
    

    for(int i=low;i<=high;i++){            // temp have less memory as compair to array      
        arr[i]=temp[i-low];                // temp itna itna big nhi h ki array ki value store kr ske 
                                           // then use temp[i-low] taki memory out of bound na ho..

    }
}
void ms(vector<int>&arr,int low ,int high){
    if(low>=high) return;
    int mid = (low + high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    marge(arr,low,mid,high);
}


int main (){
    int n =9;
    vector<int>arr={9,8,7,6,5,4,3,2,1};
      ms(arr,0,n-1);
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }

}