
#include <bits/stdc++.h>
using namespace std;

int kthdigit(int a, int b, int k)
{

    int p = pow(a, b);

    int count = 0;
    while (p > 0 && count < k)
    {

        int rem = p % 10;

        count++;

        if (count == k)
            return rem;

        p = p / 10;
    }

    return 0;
}

int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    cout << kthdigit(a, b, k);
    return 0;
}
