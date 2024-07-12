#include<bits/stdc++.h>
using namespace std ;
int find(vector<int>arr,int x){
   int up = upper_bound(arr.begin(),arr.end(),x) - arr.begin();
   return up;
}
int main (){
    vector<int>arr= {2,3,6,7,8,8,11,11,11,12};
    int x =12;
    int index = find(arr,x);
    cout<<"index number is : "<<index;
}