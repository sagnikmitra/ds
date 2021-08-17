#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("Sagnik");
    q.push("Mitra");
    q.push("DS");
    cout << q.front() << endl;
    cout << q.size() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.size() << endl;
    return 0;
}