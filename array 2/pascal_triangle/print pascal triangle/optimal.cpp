#include<bits/stdc++.h>
using namespace std ; 

vector<int>genertated(  int row){
    vector<int>ans;
       long long res = 1;
    ans.push_back(res);
    for(int col = 1 ;col<row;col++){
        res = res * ( row -col);
        res = res / col ;
        ans.push_back(res);
    }
      return ans ;
}

vector<vector<int>>pascaltriangle(int n ){
    vector<vector<int>>matrix ;

    for(int row = 1 ; row<=n;row++){
        matrix.push_back(genertated(row));
    }
return matrix ;
}
 int main (){
    int n =5 ;
vector<vector<int>> result = pascaltriangle(n);
  for(auto it : result){
    for(auto ele : it){
        cout<<ele<<" ";
    }
    cout<<"\n";
  }
 }