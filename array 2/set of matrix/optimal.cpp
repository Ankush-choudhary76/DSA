#include<bits/stdc++.h>
using namespace std ;
vector<vector<int>>setmatrix(vector<vector<int>>matrix,int n ,int m ){
   int cal0= 1 ;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(matrix[i][j]==0){
            matrix[i][0]=0;
            if(j!=0){
                matrix[0][j]=0;
            }else{
                cal0=0;
            }
        }
    }
}

for(int i =1;i<n;i++){
    for(int j =1;j<m;j++){
             if(matrix[i][j]!=0){
                matrix[i][j]=0;
             }
    }
}
if(matrix[0][0]==0){
    for(int j=0;j<m;j++){
        matrix[0][j]=0;
    }
}
if(cal0==0){
    for(int i=0;i<n;i++){
        matrix[i][0]=0;
    }
}
return matrix;

}
int main(){
    vector<vector<int>>matrix={{1,1,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}};
    int n  = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>>result=setmatrix(matrix,n,m);
    for(auto it : result){
        for(auto ele  : it){
            cout<<ele<<" ";
        }
        cout<<"\n";
    }
}