#include <bits/stdc++.h>
using namespace std ;
int solve(int ind , vector<int>&height){
      if(ind == 0 ) return 0 ;
      int left = solve(ind-1,height) + abs(height[ind]-height[ind-1]);
      int right =INT_MAX;
      if(ind >1 ){
         right = solve(ind-2, height) + abs(height[ind] - height[ind-2]);
      }
      return min (left , right );
}

int main() {

  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  cout<<solve(n-1,height);
}
