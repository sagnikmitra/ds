#include <iostream>
#include <array>
using namespace std;

int main()
{
    //Static Array
    array<int, 4> a = {1, 2, 3, 4};
    //How to Get the Size
    int sizeOfArray = a.size();
    //Traverse
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "With the Normal Index Syntax" << a[i] << endl
             << "With the at function " << a.at(i) << endl; //O(1)
    }
    //How to check if empty or not
    cout << a.empty(); //O(1)
    //How to check the front and the backl elenents
    cout << "Front Element" << a.front() << endl //O(1)
         << "Back Element" << a.back() << endl;  //O(1)

    return 0;
}