#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    int n;
    cin >> n;
    int x=0;
    for (int i = 1; i <= n; i++)
        s.push(i);
    while (s.size() > 1)
    {
        s.pop();
        s.push(s.top());
        s.pop();
        x++;
    }
    cout << s.top() << endl;
    return 0;
}