#include<bits/stdc++.h>
using namespace std ;
void findnumbers(vector<int>arr){
    int n = arr.size();
    int mising = 0;
    int repeating = 0;
   int hash[n+1]={0};
    for(int i=0;i<n;i++){
      hash[arr[i]]++;
    }
    for(int i =1;i<=n;i++){
        if(hash[i]>1) repeating =i;
        else if (hash[i]==0)mising= i;
    }
   cout<<mising<<" "<<repeating;
}
int main (){
    vector<int>arr={4,3,6,2,1,1};
   findnumbers(arr);
}