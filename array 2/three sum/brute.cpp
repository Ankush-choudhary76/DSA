#include<bits/stdc++.h>
using namespace std ;
vector<vector<int>>findans(vector<int>num){
   
    set<vector<int>>st;
    int n = num.size();
    for(int i =0 ; i<n;i++){
        for(int j = i+1 ; j<n;j++){
            for(int k = j+1 ; k<n;k++){
                if(num[i]+num[j]+num[k]==0){
                   vector<int>temp={num[i],num[j],num[k]};
                   sort(temp.begin(),temp.end());
                   st.insert(temp);
                }
            }
        }
    } 
     vector<vector<int>>ans(st.begin(),st.end());
     return ans ;
    
}



int main (){
    vector<int>arr={-1,0,1,2,-1,-4};
    vector<vector<int>>result=findans(arr);
    for(auto it : result){
    for(auto ele : it ){
         cout<<ele<<" ";
    }
    cout<<endl;
    }
}