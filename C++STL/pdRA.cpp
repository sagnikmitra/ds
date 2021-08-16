#include <iostream>
using namespace std;

int main()
{
    int num, reverse = 0;
    cin >> num;
    int tmp = num;
    while (num != 0)
    {
        reverse = reverse * 10 + (num % 10);
        num = num / 10;
    }
    if (reverse == tmp)
        cout << "P" << endl;
    else
        cout << "NP" << endl;
    return 0;
}