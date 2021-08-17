#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Sagnik");
    s.push("Mitra");
    s.push("DS");
    s.top();
    s.pop();
    s.top();

    //Deleting the Entire Stack
    while (!s.empty())
        s.pop();
    cout << s.size() << endl;
    cout << s.empty() << endl;
    return 0;
}