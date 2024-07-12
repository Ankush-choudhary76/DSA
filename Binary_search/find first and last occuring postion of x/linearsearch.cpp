#include<bits/stdc++.h>
using namespace std ;
pair<int,int>find(vector<int>arr,int x){
    int first = -1, last = - 1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x){
            last = i;
            if(first == -1){
                first = i ;
            }
        }
    }
    return {first , last};
}
int main (){
    vector<int>arr= {2,4,6,8,8,8,11,13};
    int x = 8 ;
    pair<int,int>ans = find(arr ,x);
    cout<<ans.first<<" "<<ans.second;
}