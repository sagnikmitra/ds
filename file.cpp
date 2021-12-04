#include <bits/stdc++.h>
using namespace std;
#define int long long
int fibo(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
}
main()
{
    vector<int> dp(101, -1);
    cout << fibo(100, dp);
}