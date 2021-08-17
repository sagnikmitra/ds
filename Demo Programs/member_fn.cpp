#include <iostream>
#include <string>
using namespace std;
class s
{
    string inp;

public:
    void read(void);
    void check_binary(void);
    void ones_compliment(void);
    void display(void);
};
void s::read(void)
{
    cout << "Enter a Binary Number" << endl;
    cin >> inp;
}
void s::check_binary(void)
{
    for (int i = 0; i < inp.length(); i++)
    {
        if (inp.at(i) != '0' && inp.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void s::ones_compliment(void)
{
    for (int i = 0; i < inp.length(); i++)
    {
        if (inp.at(i) == '0')
            inp.at(i) = '1';
        else
            inp.at(i) = '0';
    }
}
void s::display(void)
{
    cout << "DYBN" << endl;
    for (int i = 0; i < inp.length(); i++)
    {
        cout << inp.at(i);
    }
    cout << endl;
}
int main()
{
    s a;
    a.read();
    a.check_binary();
    a.ones_compliment();
    a.display();
    return 0;
}