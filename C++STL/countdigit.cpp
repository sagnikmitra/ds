#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inp;
    cin >> inp;
    for (int i = 0; i < inp.length() / 2 + 1; i++)
    {
        if (inp.at(i) != inp.at(inp.length() - 1 - i))
        {
            cout << "NP";
            exit(0);
        }
    }
    cout << "P";
    return 0;
}