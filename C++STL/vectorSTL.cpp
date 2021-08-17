/*
Vector is a Dynamic Array
Let's say there are four elements in a Vector and we feel the need to insert a 5th element.
Now, the vector will create a new vector of prev_size*2 size vector and copy all the elements to the new one
And will dump the previous vector
if size exceed 2^n then new 2^(n+1) will be craete to store and the 2^n sized vector will be demolished
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; //At the time of creation size is 0
    //with known size
    vector<int> a(5, 1); //Here we initialize the vector of size 5 and all the elements are initialized to 1
    cout << "Print a: " << endl;
    for (int i : a)
        cout << i << " ";
    cout << endl;
    //How to copy a vector to a new vector
    vector<int> a_cpy(a);             //here a_cpy will take all the elements from the a vector
    cout << a_cpy.capacity() << endl; //we need to remember that here the capacity will not be 8, but will be 5.
    //Now, how to check the capacity
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    //How to push elements
    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    v.push_back(4);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    v.push_back(5);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    //How to check element at a certain index
    cout << "Elements at 2nd Index: " << v.at(2) << endl;
    //How to check the front and the backl elenents
    cout << "Front Element" << a.front() << endl //O(1)
         << "Back Element" << a.back() << endl;  //O(1)
    //There is a faster method than push back which is emplace back, which works the same but a little bit faster so it can save time in case of competitive programming
    v.emplace_back(10);
    //How to pop an elements
    cout << "Before POP" << endl;
    //For traversing through a vector with the use of for loops, we can use the syntax, i.e. for (int i:v)
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    //POP BACK
    v.pop_back();
    cout << "After POP" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    //If we clear a vector using the clear() fucntuion, then the size of the vector drill down to 0 but not the capacity aka the memory asssigned to the vector
    cout << "Before Clear, the Size" << v.size() << ", the Capacity" << v.capacity() << endl;
    v.clear();
    cout << "After Clear, the Size" << v.size() << ", the Capacity" << v.capacity() << endl;

    vector<vector<int>> vec;
    vector<int> sagnik;
    sagnik.emplace_back(1);
    sagnik.emplace_back(12);
    vector<int> mitra;
    mitra.emplace_back(11);
    mitra.emplace_back(13);
    vec.emplace_back(sagnik);
    vec.emplace_back(mitra);
    vector<vector<int>> vecNest(10, vector<int>(20, 0));
    vec.push_back(vector<int>(20, 0));
    vec[2].push_back(1);
    vector<int> vecArr[4];
    return 0;
}