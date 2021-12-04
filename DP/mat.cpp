#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
#define int long long
int solve(int r, int c)
{
    if (r == 0 && c == 0)
        return 1;
    if (r < 0 || c < 0)
        return 0;
    return solve(r - 1, c) + solve(r, c - 1);
}
signed main()
{
    int row, column;
    cin >> row >> column;
    // vector<vector<int>> mat(row, vector<int>(column));
    auto start = high_resolution_clock::now();
    cout << solve(row, column);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
    return 0;
}