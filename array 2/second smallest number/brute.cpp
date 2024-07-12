#include<bits/stdc++.h>
using namespace std ;


int  Lsmallarr(vector<int>arr){
int n = arr.size();
 if(n<2) return -1 ;
int l = INT_MIN;
int sl = INT_MIN;
for(int i =0 ; i<n;i++){
    if(arr[i]>l){
            sl = max(sl , l);
            l = max(l,arr[i]);
    }else if (arr[i]> sl && arr[i] != l){
        sl = max(sl, arr[i]);
    }
    
    }
    cout<<sl<<endl ; 
    }


int smallarr(vector<int> arr){
      int n = arr.size();
    if(n<2) return -1;
        int s= INT_MAX;
int ss = INT_MAX;
        for(int i =0 ; i<n;i++){
 if(arr[i] < s){
            ss = s;
            s = arr[i];
    }else if (arr[i]<ss && arr[i]!= s){
        ss =  arr[i];
        
    }
}
cout<<ss<<endl ;
}
int main (){
vector<int>arr={1,2,4,7,7,5};

 Lsmallarr(arr);
 smallarr(arr);


}