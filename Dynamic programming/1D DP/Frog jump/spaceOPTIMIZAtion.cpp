#include <bits/stdc++.h>
using namespace std ;
int solve(int ind , vector<int>&height ){
   int prev = 0;
   int prev2 = -1 ;
   for(int i=1 ; i<= ind ; i++){
      int left =  prev  + abs(height[i]-height[i-1]);
      int right =INT_MAX;
      if(i >1 ){
         right = prev2 + abs(height[i] - height[i-2]);
      }
    int curl  = min (left , right );
    prev2 = prev ;
    prev = curl ;
   }
   return prev ;
}

int main() {

  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  cout<<solve(n-1,height);
}