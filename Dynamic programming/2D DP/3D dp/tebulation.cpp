#include <bits/stdc++.h>
using namespace std;
int maxcho(int i, int j1, int j2, int n, int m, vector<vector<int>> &matrix, vector<vector<vector<int>>> &dp)
{
    if (j1 < 0 || j1 >= m || j2 < 0 || j2 >= m)
        return -1e8;
    if (i == n - 1)
    {
        if (j1 == j2)
            return matrix[i][j1];
        else
            return matrix[i][j1] + matrix[i][j2];
    }
    if (dp[i][j1][j2] != 0)
        return dp[i][j1][j2];
    int maxi = INT_MIN;
    for (int di = -1; di < 3; di++)
    {
        for (int dj = -1; dj < 3; dj++)
        {
            int ans = 0;
            if (j1 == j2)
                ans = matrix[i][j1] + maxcho(i + 1, j1 + di, j2 + dj, n, m, matrix, dp);
            else
                ans = matrix[i][j1] + matrix[i][j2] + maxcho(i + 1, j1 + di, j2 + dj, n, m, matrix, dp);

            maxi = max(maxi, ans);
        }
    }
    return dp[i][j1][j2] = maxi;
}
int maximumChocolates(int n, int m, vector<vector<int>> &matrix)
{
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, 0)));
    
}
int main()
{
    vector<vector<int>> matrix{
        {2, 3, 1, 2},
        {3, 4, 2, 2},
        {5, 6, 3, 5},
    };

    int n = matrix.size();
    int m = matrix[0].size();
    cout << maximumChocolates(n, m, matrix);

    return 0;
}
