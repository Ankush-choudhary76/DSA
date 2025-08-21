#include<bits/stdc++.h>
using namespace std ;
int countWays(int n, int m , vector<vector<int >>&matrix  ){
 vector<int>prev(m,-1);
 for(int i=0 ; i<n  ; i++){
    vector<int>temp(m,-1);
    for(int j =0 ; j <m ; j++){
        if(i > 0 && j >0 && matrix[i][j]==-1){
            temp[j]=0 ;
            continue ;
        }
        if(i==0 && j==0 ){
            temp[j] =1 ;              
            continue ;
        }; 
        int up= 0;
        int left =0;
        if( i >0) up = prev[j];
        if(j>0) left = temp[j-1];
        
        temp[j] = up + left;
    }
    prev = temp ;
    }
    return prev[m-1];

}

int main (){
    vector<vector<int>>matrix{
        {0,0,0,},
        {0,-1,0},
        {0,0,0}
    };
    int n = matrix.size() , m = matrix[0].size();
    cout<<countWays(n , m , matrix);
}