#include <bits/stdc++.h>
#include <string>
using namespace std;
class binary2decimal
{
    string str;
    int decNum = 0;

public:
    void read(void);
    void convert2decimal(void);
    void display(void);
};
void binary2decimal::read(void)
{
    cin >> str;
}
void binary2decimal::convert2decimal(void)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == '1')
            decNum += pow(2, i);
    }
}
void binary2decimal::display(void)
{
    cout << decNum << endl;
}
class decimal2binary
{
    int decNum = 0;
    string binStr = "";

public:
    void read(void);
    void convert2binary(void);
    void display(void);
};
void decimal2binary::read(void)
{
    cin >> decNum;
}
void decimal2binary::convert2binary(void)
{
    do
    {
        binStr.append(to_string(decNum % 2));
        decNum /= 2;
    } while (decNum != 1);
    binStr.append("1");
}
void decimal2binary::display(void)
{
    for (int i = binStr.length() - 1; i >= 0; i--)
    {
        cout << binStr.at(i);
    }
    cout << endl;
}
int main()
{
    binary2decimal b2d;
    b2d.read();
    b2d.convert2decimal();
    b2d.display();
    decimal2binary d2b;
    d2b.read();
    d2b.convert2binary();
    d2b.display();
    return 0;
}