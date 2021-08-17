#include <iostream>
#include <set>
using namespace std;

int main()
{
    //INSERT, FIND, ERASE, COUNT -> All these have the time complexity as O(logn)
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.erase(s.begin());
    for (int i : s)
        cout << i << endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (int i : s)
        cout << i << endl;

    s.insert(0);
    s.insert(1);
    s.insert(2);

    if (s.count(1) == 1)
        cout << "Found";

    set<int>::iterator itF = s.find(1);
    cout << *itF << endl
         << endl;
    for (auto i = itF; i != s.end(); i++)
    {
        cout << *i;
    }
    return 0;
}