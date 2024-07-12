
#include<bits/stdc++.h>
using namespace std ;
void findnumbers(vector<int>arr){
    int n = arr.size();
    int mising = -1;
    int repiting = -1;
    for(int i=1;i<=n;i++){
     int count = 0 ;
     for(int j=0;j<n;j++){
        if(arr[j]==i){
            count ++;
        }
     }
     if(count >=2) repiting = i;
     else if(count==0) mising = i;
     if(repiting != -1 && mising != -1){
        break ;
     }

    }
    cout<<mising<<" "<<repiting;
}
int main (){
    vector<int>arr={4,3,6,2,1,1};
   findnumbers(arr);
}