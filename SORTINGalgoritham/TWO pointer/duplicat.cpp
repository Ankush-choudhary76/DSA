#include<iostream>
using namespace std ;

int main (){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int x = 6;
  int i =arr[0];
  int j= arr[7];
  while(i<j){
    if(arr[i]+arr[j]==x){
        cout<<arr[i]<<endl<<arr[j]<<endl <<" index is : "<<i<<" & " << j;
        break;
    } else if (arr[i]<arr[j]){
        j--;

    }else {
        i++;
    }

  }
    }

