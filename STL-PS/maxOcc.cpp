#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    unordered_map<int, int> umpp;
    int max = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        umpp[x]++;
        if (umpp[x] > umpp[max])
            max = x;
    }
    cout << max << endl;
    return 0;
}