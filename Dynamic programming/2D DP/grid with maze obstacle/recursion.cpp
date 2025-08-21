#include<bits/stdc++.h>
using namespace std ;

int func(int i , int j , vector<vector<int >>&a ){
 if(i ==0 && j==0) return 1 ;
  if(i>= 0 && j >= 0 && a[i][j]==-1) return 0 ;
  if(i <0 || j <0) return 0 ;
  int up = func(i-1,j, a);
  int left = func(i , j-1, a);
  return up+left;
}
int main (){
    vector<vector<int>>matrix{
        {0,0,0,},
        {0,-1,0},
        {0,0,0}
    };
    int n = matrix.size() ,  m = matrix[0].size();
    cout<<func(n-1 , m-1 , matrix  );
}
