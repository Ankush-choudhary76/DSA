#include<bits/stdc++.h>
using namespace std ;

int main (){
    vector<int>arr={1,1,1,3,3,2,2,2};
    vector<int>ls ;
    int n = arr.size();
   int mini = n/3+1;
    unordered_map<int,int>mpp;
    for(auto it : arr){
        mpp[it]++;
        if(mpp[it]==mini){
           ls.push_back(it);
        }
    }
    for(auto it : ls){
        cout<<it<<" ";
    }
}