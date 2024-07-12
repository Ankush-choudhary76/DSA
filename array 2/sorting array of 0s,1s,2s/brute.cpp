#include<bits/stdc++.h>
using namespace std ;
void marze(vector<int>&arr,int low ,int mid,int high){
vector<int>temp;
int i = low;
int j= mid+1;

while( i<=mid && j<=high ){
    if(arr[i]<=arr[j]){
        temp.push_back(arr[i]);
        i++;
    }else{
        temp.push_back(arr[j]);
        j++;
    }
}
while(i<=mid){
    temp.push_back(arr[i]);
    i++;
}
while(j<=high){
    temp.push_back(arr[j]);
    j++;
}
for(int i= low ;i<=high;i++){
    arr[i]=temp[i-low];
}

}

  void sorted(vector<int>&arr,int low,int high){
    if(low == high)  return ;
    int mid = (low+high)/2;
    sorted(arr,low,mid);
    sorted(arr,mid+1,high);
    marze(arr,low,mid,high);
}
int main (){
     vector<int > arr={0,1,2,0,1,2,1,2,0,0,0,1};
       int n = arr.size();
      sorted(arr,0,n-1);
    for(  int i=0 ;i<n;i++){
        cout<<arr[i]<<endl;
    }

}