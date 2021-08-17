#include <iostream>
#include <map>
using namespace std;

int main()
{
    //In case of map, it is sorted
    map<int, string> m;
    m[1] = "Sagnik";
    m[2] = "Mitra";
    m[3] = "DS";
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
    return 0;
}