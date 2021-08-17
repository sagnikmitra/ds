#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    multiset<int> ms;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }
    for (auto it : ms)
        cout << it << endl;
    return 0;
}