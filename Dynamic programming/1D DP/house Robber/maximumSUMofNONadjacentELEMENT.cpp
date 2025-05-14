#include<bits/stdc++.h>
using namespace std ;


int solve(int ind , vector<int>&arr){
    if(ind == 0 ) return arr[0];
    if(ind < 0 ) return 0 ;
    int pick = solve(ind -2 , arr) + arr[ind];
    int np = 0 + arr[ind-1];
    return max(pick , np);

}
int main() {
    vector<int> arr{2, 1, 4, 9};
    int n = arr.size();
    
   
    cout << solve(n-1, arr);

    return 0;
}

