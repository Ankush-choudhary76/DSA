#include<bits/stdc++.h> 
using namespace std ; 
int findcontentChildren( vector<int>greed ,  vector<int>cookiesize){
    sort(greed.begin() , greed.end());
    sort(cookiesize.begin() , cookiesize.end());

    int l = 0 , r = 0 ;
    int n = greed.size() , m = cookiesize.size();

    while (l < m && r < n )
    {
       if(greed[r] <= cookiesize[l]){
        r++; 
       }
       l++;
    }
    return r ; 
}
int main (){
    vector<int>greed = {1,5,3,3,4};
    vector<int>cookiesize = {4,2,1,2,1,3};

   cout<<" ANSWER = "<< findcontentChildren(greed , cookiesize)<<"  ";
}
