#include<bits/stdc++.h>
using namespace std ;


int solve(int ind , vector<int>&arr  ){
    int prev = arr[0];
    int prev2 = 0 ;
    for(int i= 1 ; i<= ind ;i++){
        int pick = arr[i];
        if(i>1){
         pick += prev2;
        }
         int nonpick = 0 + prev;
    int cur_i = max(pick , nonpick);
    prev2 = prev ;
    prev = cur_i;
    }
    return prev;

}
int main() {
    vector<int> arr{2, 1, 4, 9};
    int n = arr.size();
    cout << solve(n-1, arr );

    return 0;
}