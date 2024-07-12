#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>>findans(vector<int>&nums){
    int n = nums.size();
    set<vector<int>>st;
    for(int i =0 ; i<n;i++){
        set<int>hashset;
        for(int j=i+1;j<n;j++){
            int third = -(nums[i]+nums[j]);
            if(hashset.find(third)!=hashset.end()){
                vector<int>temp={nums[i],nums[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
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