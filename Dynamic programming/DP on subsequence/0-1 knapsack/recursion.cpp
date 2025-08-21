#include<bits/stdc++.h>
using namespace std ;
int find(int ind   , int w , vector<int>&val , vector<int>&wt){
    if(ind == 0 ){
        if( wt[0]<= w) return val[0];
        else return 0 ; 
    }
    int not_take = 0 + find(ind-1 , w , val , wt );
    int take = INT_MIN;
    if(wt[ind] <= w){
        take = val[ind] + find(ind -1 , w - wt[ind] , val , wt );
    }
    return max (take  , not_take );
}
int unboundedKnapsack(int n , int w , vector<int>&val , vector<int>&wt){
   return find(n-1 ,w , val , wt  );
}
    int main() {
    vector<int> wt = {3,2,5}; 
    vector<int> val = {30,40,60};
    int W = 6;
    int n = wt.size();


    cout << "The Maximum value of items the thief can steal is " << unboundedKnapsack(n, W, val, wt) << endl;

    return 0;

 }
