#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>>setmatrix(vector<vector<int>>&matrix,int n){
for(int i=0; i<n-1;i++){

    for(int j=i+1;j<n;j++){
         swap(matrix[i][j],matrix[j][i]);
    }
}
   for(int i =0 ; i<n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
   }
return matrix;
}


int main(){
vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
 int n  = matrix.size();
    vector<vector<int>>result=setmatrix(matrix,n);
    for(auto it : result){
        for(auto ele  : it){
            cout<<ele<<" ";
        }
        cout<<"\n"; 
    }
}
