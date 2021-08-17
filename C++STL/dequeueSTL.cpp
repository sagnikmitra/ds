/*
Double Ended queue means we can do insertion and removal from both front and back
Dequeue has multiple fixed static array but this is dynamic in nature
Random access if possible using at operation
*/
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    for (int i : d)
        cout << i << " ";
    cout << endl;
    d.push_front(2);
    for (int i : d)
        cout << i << " ";
    cout << endl;
    // d.pop_back();
    // for (int i : d)
    //     cout << i << " ";
    // cout << endl;
    // d.pop_front();
    // for (int i : d)
    //     cout << i << " ";
    // cout << endl;
    cout << "First Index Element: " << d.at(1);
    //How to check the front and the backl elenents
    cout << "Front Element" << d.front() << endl //O(1)
         << "Back Element" << d.back() << endl;  //O(1)
                                                 //How to check if empty or not
    cout << d.empty();                           //O(1)
    d.erase(d.begin(), d.begin() + 1); //O(n)
    return 0;
}
