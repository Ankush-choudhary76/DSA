#include<bits/stdc++.h>
using namespace std ;

vector<int>sprial(vector<vector<int>>matrix){
    int n = matrix.size();
    int m = matrix[0].size();
   vector<int>ans;
   int top = 0 ,left = 0;
   int bottom = n-1, right = m-1;
while(top <= bottom && left<=right){
     for(int i = left ; i<=right ; i++){
            ans.push_back(matrix[top][i]);
   }top++;

    for(int i = top ; i<=bottom ; i++){
            ans.push_back(matrix[i][right]);
   }right--;
       if(top<=bottom){
    for(int i = right ; i>=left ; i--){
            ans.push_back(matrix[bottom][i]);
   }bottom--;
       }
        if(left<=right){
      for(int i = bottom ; i>=top ; i--){
            ans.push_back(matrix[i][left]);
   }left++;
        }
}
       return ans ;
}

int main (){
vector<vector<int>>matrix={{1,2,3,4,5,6},
                         {20,21,22,23,24,7},
                         {19,32,33,34,35,8},
                         {18,31,38,37,36,9},
                         {17,30,29,28,27,10},
                         {16,15,14,13,12,11}};
vector<int>result=sprial(matrix);
for(auto it : result){
    cout<< it<<" ";
}


}