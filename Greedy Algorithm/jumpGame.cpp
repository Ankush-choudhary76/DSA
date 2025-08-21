#include<bits/stdc++.h>
using namespace std ;
bool JumpGame(vector<int>nums){
    int max_index=0 ;
    for(int i=0 ; i<nums.size();i++){
        if(i>max_index){
            return false;
        }
        max_index = max(max_index, i+nums[i]);
    }
    return true;
}
int main(){
    vector<int>nums={1,2,4,1,1,0,2,5};
    JumpGame(nums)?cout<<"TRUE":cout<<"FALSE";
}
