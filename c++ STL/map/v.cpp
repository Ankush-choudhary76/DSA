#include<bits/stdc++.h>
using namespace std;
int main (){

    int n =4;
        int arr[n];
   map<int ,int >mp;
   for(int i=0;i<4;i++){
    cin>>arr[i];
    mp[arr[i]]++;
   }
   for(auto it : mp){
    cout<<it.first<<" --> "<<it.second<<endl;
   }
     
   int j=4;
   while(j!=0){
    cout<<"enter a number : ";
    int number;
    cin>>number;
    cout<<mp[number]<<endl;
   }



}