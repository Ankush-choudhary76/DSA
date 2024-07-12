#include<bits/stdc++.h>
using namespace std ;
int find(vector<int>arr,int x){
    int n = arr.size();
    int low =0, high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans = mid;
            high = mid-1;
        }else{
            low = mid +1;
        }
    }
    return ans ;
}
int main (){
    vector<int>arr= {3,5,8,15,19,19,19};
    int x =19;
    int index = find(arr,x);
    cout<<"index number is : "<<index;
}