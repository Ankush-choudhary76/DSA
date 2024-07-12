#include<bits/stdc++.h>
using namespace std ;

int main (){
   vector< int >arr={0,1,2,0,1,2,1,2,0,0,0,1};
   int n = arr.size();
    int Cones=0,Ctows=0,Czeros=0;
    for(int i=0;i<n;i++){
         if(arr[i]==0){
            Czeros++;
         }
         else if (arr[i]==1){
            Cones++;
         }
         else{
            Ctows++;
         }
    }
    for(int i=0;i<Czeros;i++){
        arr[i]=0;
    }
     for(int i=Czeros;i<Czeros+Cones;i++){
        arr[i]=1;
    }
     for(int i=Czeros+Cones;i<n;i++){
        arr[i]=2;
    }
    for(auto it : arr){
        cout<<it<<endl;
    }
}