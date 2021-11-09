//BS: TCS Digital
#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        dq.push_back(i);
    }
    while (dq.size() > 1)
    {
        dq.pop_front();
        dq.push_back(dq.front());
        dq.pop_front();
    }
    cout << dq.front();
    return 0;
}