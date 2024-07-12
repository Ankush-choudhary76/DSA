#include<bits/stdc++.h>
using namespace std ;
int find(vector<int>arr,int x){
   int lb = lower_bound(arr.begin(),arr.end(),x) - arr.begin();
   return lb;
}
int main (){
    vector<int>arr= {3,5,8,15,19,19,19};
    int x =12;
    int index = find(arr,x);
    cout<<"index number is : "<<index;
}