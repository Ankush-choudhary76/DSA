#include<bits/stdc++.h>
using namespace std ; 
int  f (int n , int m , vector<vector<int>>a){
    vector<int>prev(m,0);
    for(int i=0 ; i<n;i++){
        vector<int>temp(m,0);
        for(int j =0 ; j<m;j++){
        if(i==0 && j==0 ){
            temp [j] = a[i][j];
        }else{
            int left = a[i][j];
            if(j>0) left += temp[j-1];
            else left += 1e9 ;
            int up = a[i][j];
            if(i>0 ) up += prev[j];
            else up +=1e9;
            temp[j] = min (left , up);
        }
        }  
        prev = temp ;
    }
    return prev[m-1];
}
int main() {
    vector<vector<int>> matrix{
        {5, 9, 6},
        {11, 5, 2}
    };

    int n = matrix.size();
    int m = matrix[0].size();

    cout << "Minimum sum path: " << f(n, m, matrix) << endl;
    return 0;
}
