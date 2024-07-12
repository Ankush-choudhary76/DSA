# include<bits/stdc++.h>
using namespace std ; 
bool cowweplace(vector<int>arr, int dis , int cowes){
     int cntcows = 1 ; 
    int last = arr[0];
    for(int i=1 ;i<arr.size();i++){
        if(arr[i]-last >= dis){
            cntcows ++ ;
            last = arr[i];
        }
        if(cntcows>= cowes) return true ;
    }
    return false ;
}
int aggresive (vector<int>arr,int cowes){
    int n  = arr.size();
   sort(arr.begin(),arr.end());
     int low = 1 ;
   int high = arr[n-1] - arr[0];
   while(low<=high ){
   int mid = (low + high )/2 ;
   if(cowweplace(arr,mid,cowes)== true){
       low = mid+1;
     }else{
       high = mid-1;
       }
   }
   return high  ;
}
int main (){
    vector<int>arr={0,3,4,7,10,9};
    int cows = 4 ;
    int result = aggresive(arr , cows);
    cout<<result ;
}