// same as brute 
// both have same  tc and sc 
#include<bits/stdc++.h>
using namespace std ;
int nCr(int n , int r ){
   int  res = 1; 
    for(int i =0 ; i<r;i++){
        res = res *(n-i);
        res = res / (i+1);
    }
    return  (res) ;
}
vector<vector<int>> pascaltriangle(int n){
    vector<vector<int>>matrix ;
   
    for(int i =1 ; i<=n;i++){
          vector<int>ans;
        for(int j = 1;j<=i;j++){
            ans.push_back(nCr(i-1,j-1));
        }
       matrix.push_back(ans);
    }
    return matrix ;
}
int main(){
    int n = 5 ;
   vector<vector<int>> result =  pascaltriangle(n);
   for(auto it : result){
    for(auto ele : it ){
        cout<<ele<<" ";
    }cout<<endl ;
   }
}