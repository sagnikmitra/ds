#include <iostream>
#include <map>
using namespace std;

int main()
{
    //Map only stores unique keys
    //In case of map, it is sorted

    //Unordered Map is the same just it doesn't store in any order, and it is O(1) in almost all the cases
    //And O(n) in worst case
    map<int, string> m;
    m[1] = "Sagnik";
    m[2] = "Mitra";
    m[3] = "DS";
    m.emplace(12, "Sa");
    m.insert({5, "CPP"});
    for (auto i : m)
    {
        cout << i.first << " : " << i.second << endl;
    }
    cout << "Finding 5 " << m.count(5) << endl;
    m.erase(5);
    for (auto i : m)
    {
        cout << i.first << " : " << i.second << endl;
    }
    auto it = m.find(3);
    for (auto i = it; it != m.end(); i++)
    {
        cout << (*i).first << endl;
        exit(0);
    }
    // m.erase(m.begin(), m.end());
    for (auto itr : m)
    {
        cout << itr.first << " " << itr.second << endl;
    }
    for (auto itr = m.begin(); itr != m.end(); it++)
    {
        cout << (*itr).first << " " << itr->second << endl;
    }
    return 0;
}