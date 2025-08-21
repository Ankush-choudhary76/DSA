#include<bits/stdc++.h>
using namespace std ; 
int minSumPath(int n , int m , vector<vector<int>>a ){
    if(n==0 && m== 0 ) return a[n][m];
    if(n <0 || m <0) return 1e9;
    int left = a[n][m]+ minSumPath(n, m-1, a);
    int up = a[n][m]+minSumPath (n-1 , m,a);
    return min (left , up); 
}
int main() {                         
    vector<vector<int>> matrix{
        {5, 9, 6},
        {11, 5, 2}
    };

    int n = matrix.size();
    int m = matrix[0].size();

    cout << "Minimum sum path: " << minSumPath(n-1, m-1, matrix) << endl;
    return 0;
}
