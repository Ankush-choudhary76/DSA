#include<bits/stdc++.h>
using namespace std ;
int subset(vector<int>&arr , int ind , int target){
  if(target==0) return 1 ;
  if(ind == 0) return arr[ind]== target ;
  int not_pick = subset(arr,ind-1 , target);
  int pick = 0 ;
  if(arr[ind]<= target) pick = subset( arr, ind-1 , target - arr[ind]);
   return pick + not_pick;
}
int findWays(vector<int>&arr ,int k ){
 int n = arr.size();
 return subset(arr ,n-1 , k );
}

int main() {
    vector<int> arr = {1, 2, 2, 3};
    int k = 3;

    cout << "The number of subsets found are " << findWays(arr, k);

    return 0;
}

