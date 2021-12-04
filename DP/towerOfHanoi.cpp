#include <bits/stdc++.h>
using namespace std;
void tower(int num, char a, char b, char c)
{
    if (num == 0)
        return;
    tower(num - 1, a, c, b);
    cout << a << "\t" << c << endl;
    tower(num - 1, b, a, c);
}
main()
{
    int n;
    cin >> n;
    tower(n, 'a', 'b', 'c');
}