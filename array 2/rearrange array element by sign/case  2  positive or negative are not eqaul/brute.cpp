#include<bits/stdc++.h>
using namespace std ;
vector<int>rearrange(vector<int>a){
    int n = a.size();
    vector<int>pos;
    vector<int>nega;
    for(int i=0;i<n;i++){
        if(a[i]>0) pos.push_back(a[i]);
        else nega.push_back(a[i]);
    }
    
    if(nega.size()>pos.size()){
        for(int i =0 ;i<pos.size();i++){
                 a[2*i]=pos[i];
                 a[2*i+1]=nega[i];
        }
        int index = nega.size()*2;
        for(int i=index;i<nega.size();i++){
            a[index]=nega[i];
            index++;
        }
    }else{
         for(int i =0 ;i<nega.size();i++){
                 a[2*i]=pos[i];
                 a[2*i+1]=nega[i];
        }
        int index = pos.size()*2;
        for(int i=index;i<pos.size();i++){
           a[index]=pos[i];
            index++;
        }
    }
    return a ;

}


int main (){

    vector<int>arr={1,2,-4,-5,3,6};
   vector<int>ns= rearrange(arr);
   for(auto it : ns){
    cout<<it<<endl ;
   }

}