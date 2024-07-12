#include<bits/stdc++.h>
using namespace std ;

int main (){
         vector<int>arr={1,1,1,3,3,2,2,2};
        int n = arr.size()/3;
         vector<int> list ;
    for(int i =0 ; i<arr.size();i++){
        if(list.size()==0 || list[0]!=arr[i]){
                int count =0;
            for(int j = 0;j<arr.size();j++){
                if(arr[j]==arr[i]){
                   count++;
                }
            }
            if(count>n) list.push_back(arr[i]);
         
        }
          if(list.size()==2)break;
    }

    for(auto it : list){
        cout<<it<<" ";
    }
}