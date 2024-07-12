#include<bits/stdc++.h>
using namespace std ;

void markrow(vector<vector<int>>&matrix,int n,int i){
    for(int j =0;j<n;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}
void markcal(vector<vector<int>>&matrix,int m,int j){
    for(int i =0;i<m;i++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}

vector<vector<int>>setmatrix(vector<vector<int>>matrix){
int n = matrix.size();
int m = matrix.size();

for(int i=0 ; i<n;i++){
    for(int j =0 ; j<m;j++){
        if(matrix[i][j] ==0 ){
            markrow(matrix,n,i);
            markcal(matrix,m,j);
        }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(matrix[i][j]==-1){
            matrix[i][j]=0;
        }
    }
}

return matrix;



}


int main (){
     vector<vector<int>>matrix= {{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}};
     //vector<vector<int>>matrix={{1,1,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}};
    vector<vector<int>>result=setmatrix(matrix);
    for(auto it : result){
        for(auto ele : it ){
            cout<< ele <<" ";
        }
        cout<<endl;
    }
}
