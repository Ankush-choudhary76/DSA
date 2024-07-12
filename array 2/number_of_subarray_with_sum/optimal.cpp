#include<bits/stdc++.h>
using namespace std ;

int main (){
vector<int>arr={1,2,3,-3,1,1,1,4,2,-3};
int r = 3 ;
int count = 0 ,presum = 0;
unordered_map<int,int>mpp;
  mpp[0]=1;
for(int i =0 ;i<arr.size();i++){
    presum +=arr[i];
    int remove = presum - r;
   count +=mpp[remove];
    mpp[presum] += 1;

}
cout<<count ;

}