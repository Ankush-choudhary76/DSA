#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>>foursum(vector<int>&arr,int target){
    int n = arr.size();
    set<vector<int>>st;
    for(int i =0 ; i<n;i++){
        for(int j= i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                for(int l = k+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==target){
                    vector<int>temp = {arr[i],arr[j],arr[k],arr[l]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                  }
                }

               
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans ;
}

int main (){
    vector<int>arr= {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    vector<vector<int>>result = foursum(arr,target);
    for(auto vec : result){
        for(auto it : vec){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}