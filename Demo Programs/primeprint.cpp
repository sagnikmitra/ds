#include <iostream>
using namespace std;

void primecheck(int n)
{
    int flag;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            flag++;
    }
    if (flag == 0)
        cout << n << endl;
    flag = 0;
}

void primeRange(int lR, int uR)
{
    for (int i = lR; i <= uR; i++)
    {
        primecheck(i);
    }
}

int main()
{
    int lR, uR;
    cin >> lR >> uR;
    primeRange(lR, uR);
    return 0;
}