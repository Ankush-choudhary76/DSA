#include<bits/stdc++.h>
  using namespace std ; 
  int  cntstudent(vector<int>arr, int pages ){
    int student = 1 ;
    int  cntpages = 0 ;
    for(int i=0 ; i<arr.size();i++){
        if( cntpages + arr[i]<= pages){
            cntpages += arr[i];
        }else {
            student ++   ;
            cntpages = arr[i];
        }
    }
    return student;
  }
  int student(vector<int>arr, int stu){
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin (), arr.end(),0);
    while(low<= high){
        int mid = (low + high)/2 ;
        if(cntstudent(arr, mid)<= stu){
              high = mid -1 ;
        }else{
            low = mid +1 ;
        }
    }
    return low ;
  }
  int main(){
    vector<int>arr={25,46,28,49,24};
    int stu = 4 ;
    int result = student(arr, stu);
    cout<<result;
  }