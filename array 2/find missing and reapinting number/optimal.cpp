#include<bits/stdc++.h>
using namespace std ;
vector<int>findnumbers(vector<int>arr){
    long long n = arr.size();
    long long sn = (n*(n+1))/2;
    long long s2n = (n*(n+1)*(2*n+1))/6;
     long long s =0 ,s2=0;
     for(int i=0;i<n;i++){
        s +=  arr[i];
        s2 += (long long)arr[i]*(long long)arr[i];
     }
     long long val1 = s-sn;
     long long val2 = s2 - s2n;
     val2 = val2 / val1;
     long long x = (val1 + val2)/2;
     long long y = x - val1;

     return {(int)x , (int)y};

}
int main (){
    vector<int>arr={3,1,2,5,4,6,7,5};
    vector<int>ans=findnumbers(arr);
    for(auto it : ans){
        cout<<it<<",";
    }
}