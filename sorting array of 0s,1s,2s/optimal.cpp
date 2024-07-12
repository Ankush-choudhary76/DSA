#include<bits/stdc++.h>
using namespace std ;
int main (){
    vector<int > arr={0,1,2,0,1,2,1,2,0,0,0,1};
    int n = arr.size();
    int low =0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        } else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(auto it : arr){
        cout<<it<<endl;
    }
}