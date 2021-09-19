#include <bits/stdc++.h>
using namespace std;
int myXOR(int x, int y)
{
    return (x | y) & (~x | ~y);
}
int main()
{
    int max = INT_MIN;
    int res = 0;
    int ttc, size = 0;
    cin >> ttc;
    int arr[105][ttc];
    for (int i = 0; i < ttc; i++)
    {
        cin >> size;
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < ttc; i++)
    {
        for (int j = 0; j < size; j++)
        {
            res = 0;
            for (int k = 0; k < size; k++)
            {
                res += myXOR(arr[i][j], arr[i][k]);
            }
            if (res > max)
                max = res;
        }
        cout << res << endl;
    }
}