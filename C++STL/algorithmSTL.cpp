#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    //BInary Search
    cout << binary_search(v.begin(), v.end(), 6) << endl;
    cout << lower_bound(v.begin(), v.end(), 7) - v.begin() << endl;
    cout << upper_bound(v.begin(), v.end(), 7) - v.begin() << endl;

    //Max, Min
    cout << max(v.at(1), v.at(2)) << endl;
    //Swap
    swap(v.at(1), v.at(2));
    for (int i : v)
        cout << i << endl;
    string ab = "abcd";
    reverse(ab.begin(), ab.end());
    cout << ab;
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After Rotate" << endl;
    for (int i : v)
        cout << i << "";
    cout << endl;
    sort(v.begin(), v.end());
    for (int i : v)
        cout << i << "";
    return 0;
}