#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    string s;
    string tmp = s;
    cin >> s;
    reverse(s.begin(), s.end());
    if (s == tmp)
        cout << "P";
    else
        cout << "NP";
    return 0;
}