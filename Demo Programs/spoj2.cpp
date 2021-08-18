#include <iostream>
using namespace std;

void primecheck(int n)
{
	int flag = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			flag++;
	}
	if (flag == 2)
		cout << n << endl;
	flag = 0;
}

int main()
{
	int t, lR, uR;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> lR >> uR;
		for (int j = lR; j <= uR; j++)
		{
			primecheck(j);
		}
	}
	return 0;
}