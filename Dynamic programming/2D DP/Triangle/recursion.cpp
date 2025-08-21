#include<bits/stdc++.h>
using namespace std ;
int find(int i , int j , int n , vector<vector<int>>&tri){
    if(i==n-1) return tri[i][j];
    int down = tri[i][j] + find(i+1, j , n , tri);
    int dia = tri[i][j] + find(i+1, j+1 , n , tri);
    return min(down , dia);
}
int minimumPathSum(vector<vector<int>>tri ,int n ){
    return find(0,0,n, tri);
}
int main() {
    
    vector<vector<int> > triangle{{1},
                                   {2, 3},
                                   {3, 6, 7},
                                   {8, 9, 6, 10}};

    int n = triangle.size();
    cout << minimumPathSum(triangle, n);

    return 0;
}
