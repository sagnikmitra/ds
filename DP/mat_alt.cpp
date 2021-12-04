#include <bits/stdc++.h>
using namespace std;
#define int long long
int solve(int r, int c, vector<vector<int>> &mat)
{
    if (r == 0 && c == 0)
    {
        return 1;
    }
    if (r < 0 || c < 0)
    {
        return 0;
    }
    if (mat[r][c] != -1)
    {
        return mat[r][c];
    }
    return mat[r][c] = solve(r - 1, c, mat) + solve(r, c - 1, mat);
}
signed main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> mat(r + 1, vector<int>(c + 1, -1));
    cout << solve(r, c, mat);
    return 0;
}