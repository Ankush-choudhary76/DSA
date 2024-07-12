#include<bits/stdc++.h>
using namespace std ;


vector<vector<int>>setmatrix(vector<vector<int>>matrix,int n,int m){
    int row[n]={0}, cal[m]={0};
    for(int i =0;i<n;i++){
        for(int j=0 ; j<m;j++){
            if(matrix[i][j]==0){
                row[i]= 1;
                cal[j]= 1;
            }
        }
    }
     for(int i =0;i<n;i++){
        for(int j=0 ; j<m;j++){
            if(row[i] || cal[j]){
              matrix [i][j]=0;
            }
        }
    }
    return matrix ;
}

int main (){
    vector<vector<int>>matrix={{1,1,1},{1,0,1},{1,1,1}};
    // vector<vector<int>>matrix={{1,1,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>>result=setmatrix(matrix,n,m);
    for(auto it : result){
        for(auto  ele : it){
            cout<<ele<<" ";
        }
        cout<<"\n";
    }
}