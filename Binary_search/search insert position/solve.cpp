 #include<bits/stdc++.h>
 using namespace std ;
  int searchinsert_position(vector<int>arr,int x ){
    int n =arr.size();
    int low = 0, high = n-1;
    int ans = n ;
    while(low<=high){
        int mid = (low +high)/2;
        if(arr[mid]>=x){
            ans = mid ;
            high = mid -1;
        }else{
            low = mid+1;
        }
    }
    return ans ;
  }
 int main (){
    vector<int>arr={1,2,4,7};
   int inser_element = 6;
    int inser_element_index = searchinsert_position(arr, inser_element);
    cout<<"index is : "<<inser_element_index;
 }