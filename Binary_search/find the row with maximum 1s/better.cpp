#include<bits/stdc++.h>
using namespace std ; 
int maxrow(vector<vector<int>>matrix){
     int n =matrix.size() , m = matrix.size();
    int  index = 0 , max_cnt=0;
     for(int i=0 ;i<n;i++){
            int cnt = 0;
            for(int j=0 ; j<n;j++){
                if(matrix[i][j]== 1){
                    cnt ++ ;
                }
               
            }
            if(cnt> max_cnt){
                max_cnt = cnt ;
                index = i ;
            }
     }
     return index;
}
int main (){
    vector<vector<int>>matrix{{0,0,1,1,1},{0,0,0,0,0},{0,1,1,1,1},{0,0,0,0,0},
                                {0,1,1,1,1}};
     int ans = maxrow(matrix );
     cout<<ans ;                           
}