#include<bits/stdc++.h>
using namespace std ;
int main (){
vector<int>arr={10,22,12,3,0,6};
int n = arr.size();
int maxel = INT_MIN;
vector<int>temp ;
for(int  i = n -1;i>=0;i--){
    if(arr[i]> maxel){
     temp.push_back(arr[i]);
    }
    maxel = max(maxel,arr[i]);
}
for( auto it : temp){
    cout<<it<<endl ;
}
}