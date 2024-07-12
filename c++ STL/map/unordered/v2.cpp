#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n ;
    cout<<" enter n ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
           cin>>arr[i];
    }

    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout<<it.first<<"   --->   "<<it.second<<endl ;
    }

    int q;
    cout<<" enter q ";
    cin>>q;

    while(q++){
        int n ;
        cout<<"enter  n ";
        cin>> n;
        cout<<mpp[n]<<endl;
    }

}