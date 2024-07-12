#include<bits/stdc++.h>
using namespace std ;
 int findval(vector<int>arr, int m ){
        int sum = 0 ;
        for(int i = 0 ; i<arr.size();i++){
            sum += ceil((double)arr[i]/(double)(m));
        }
        return sum ;
    }
int smallestD(vector<int>arr, int t ){
    int maxi = *max_element(arr.begin(),arr.end());
    int low = 1 , high = maxi ;
    while(low<=high){
        int mid = (low + high)/2;
         if(findval(arr,mid)<= t) {
            high = mid -1 ;
         }else{
            low = mid +1;
         }

    }
    return low ;
}
int main (){
    vector<int>arr= {1,2,5,9};
    int thresold = 6 ;
    int result= smallestD(arr , thresold );
    cout<<result ;
}