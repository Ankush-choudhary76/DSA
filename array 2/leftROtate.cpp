#include<bits/stdc++.h>
using namespace std ;
void rotate(vector<int>&arr,int n ){
  int  i=0;
    while(i<n-1){
      swap(arr[i],arr[i+1]);
          i++;
    }
}

int main (){
    vector<int>arr={1,2,3,4,5};
    int l = arr.size();
    rotate(arr,l);

    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }

}
// #include<bits/stdc++.h>
// using namespace std ;
// void rotate(vector<int>&arr,int n ){
//  int temp=arr[0];
//  for(int i=1;i<n;i++){
//     arr[i-1]=arr[i];
//  }
//  arr[n-1]=temp;
// }

// int main (){
//     vector<int>arr={1,2,3,4,5};
//     int l = arr.size();
//     rotate(arr,l);

//     for(int i=0;i<l;i++){
//         cout<<arr[i]<<" ";
//     }

// }