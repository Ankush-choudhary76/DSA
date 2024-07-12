#include<bits/stdc++.h>
using namespace std ;
void merge(vector<int>&arr,int low,int mid ,int high){
    vector<int>temp;
   int left = low;
   int right = mid+1;
   while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
             temp.push_back(arr[left]);
                left++;
        }else{
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
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
int countpair(vector<int>&arr,int  low,int mid ,int high ){
    int left = low;
    int right = mid+1;
    int count =0;
    for(int i = low ;i<=mid;i++){
        while(right<=high && arr[i]>2*arr[right]) right ++;
       count += right - (mid+1);
    }
    return count;
}
int  mergesort(vector<int>&arr,int low ,int high){
    int cnt =0;
    if(low>=high) return cnt ;
    int mid = (low+high)/2;
   cnt += mergesort(arr,low,mid);
   cnt+= mergesort(arr,mid+1,high);
   cnt+= countpair(arr,low,mid,high);
    merge(arr,low,mid,high);
    return cnt ;
}
int  search(vector<int>&arr){
    return mergesort(arr,0,arr.size()-1);
}
int main (){
    vector<int>arr= {40,25,19,12,9,6,2};
  int count =  search(arr);
   cout<<count<<" ";
}