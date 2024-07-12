#include<bits/stdc++.h>
using namespace std ;
int mazority(vector<int>arr){
    map<int,int>mpp;
    int n = arr.size();
    for(int i=0;i<n;i++){
           mpp[arr[i]]++;

    }
    for( auto it : mpp){
      if(it.second>n/2){ 
        return it.first;
      }

    }
return -1;

}

int main(){
    vector<int>arr={2,2,3,3,1,2,2};
  int r =  mazority(arr);
  cout<<r<<endl;
}