#include <iostream>
using namespace std;
int main()
{
    int p = 3, q = 2, r = 12;
    q = 12 + r;
    for (r = 5; r < 7; r++)
    {
        q = (p & r) + r;
        p = q;
    }
    cout << p + q;
    return 0;
}