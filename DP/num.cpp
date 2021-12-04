#include <bits/stdc++.h>
using namespace std;
int sol(int arr[], int n);
int main()
{
    int arr[4] = {1, 2, 3, 4};
    cout << sol(arr, 4);
    return 0;
}
int sol(int arr[], int n)
{
    int i = 0;
    int dp[4] = {0, 0, 0, 0};
    dp[0] = arr[0];
    for (int i = 1; i < n; i++)
        dp[i] = 10 * dp[i - 1] + arr[i] * (i + 1);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << dp[i] << endl;
        sum += dp[i];
    }
    return sum;
}