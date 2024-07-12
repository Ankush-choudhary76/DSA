#include<bits/stdc++.h>
using namespace std ;

int main (){
    vector<int>arr={10,22,12,3,0,6};
    int i =0;
    int n =arr.size();
    vector<int>temp ;
    for(int i =0; i<n;i++){
        int flag =0 ;
        for(int j = i+1 ; j<n;j++){
            if(arr[i]<arr[j]){
               flag = 1;
               break;
            }
        
        }
        if(flag==0){
            temp.push_back(arr[i]);
        }
        
    }

    for(auto it : temp)
{
    cout<<it<<endl;
}}