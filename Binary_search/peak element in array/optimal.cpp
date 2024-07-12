# include<bits/stdc++.h>
using namespace std ;
int find(vector<int>arr){
     int n = arr.size();
     int low = 1 , high = n-2 ;
     if(n==1)return 0 ;
     if(arr[0]>arr[low]) return 0 ;
     if(arr[high]<arr[n-1])return n-1;
     while(low <= high ){
        
        int mid = (low + high)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return  mid ;
        }
        else if(arr[mid]>arr[mid -1]){
            low = mid +1 ;
        }else high = mid - 1 ;

     }
   return -1 ;
}
int main (){
    vector<int>arr={5,4,3,2,1};
    int ans = find(arr);
    cout<<ans;

}