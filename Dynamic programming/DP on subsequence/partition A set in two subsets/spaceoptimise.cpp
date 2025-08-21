#include<bits/stdc++.h>
using namespace std ;
int minSubsetSumDifference(vector<int>&arr, int n ){
      int totsum =0 ;
      for(int i=0 ; i<n ; i++){
        totsum += arr[i];
    }
    vector<bool>prev(totsum+1 , false );
    
    prev[0] = true ;
    if(arr[0]<= totsum){
        prev[arr[0]] = true ;
    }
    for(int ind =1 ; ind <n; ind ++){
        vector<bool>cur(totsum+1,false);
        cur[0] = false ;
        for( int target = 1 ; target <= totsum ; target ++){
        bool not_take = prev[target];
        bool take = false ;
        if(target >= arr[ind]){
        take =  prev[target - arr[ind]] ;
        }
        cur[target] = take || not_take;
        }
        prev = cur;
    }
    
    int mini = 1e9 ;
    for(int i=0 ; i<= totsum ; i++){
        if(prev[n-1]= true ){
            int diff = abs(i - (totsum -i));
            mini = min(mini , diff);
        }
    }
    return mini ; 

}

int main (){
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();

    cout << "The minimum absolute difference is: " << minSubsetSumDifference(arr, n);

    return 0;
}

