#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int>arr={8,9,7 ,18,22};
int target = 25;
    unordered_map<int,int>mpp;

for(int i=0;i<arr.size();i++){
    int  a = arr[i];
    int value = target - a;
    if(mpp.find(value) != mpp.end()){
        cout<< value<<" "<<arr[i];
    }
    mpp[a] = i;
}
}