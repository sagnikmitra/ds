#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    //So, bt is basically a combination of 0 & 1 represneting a binary kind of structure.
    bitset<5> bt;
    cin >> bt;
    //let's say our bt is 10001
    //Count - Counts how many number of 1s are there
    cout << bt.count(); //This will print 2
    //Flip - If there are no paramter, then it will flip all the bits
    cout << bt.flip(2); //Now the BT will become 10101
    //None - This is used to check if all the lemetns that are there in the bitset, are 0 or not
    //If any one of it is 1, then it will return false
    cout << bt.none();
    //Set - It bascially puts some values according to the paramateres
    //There are three cases that are mentioned below
    //First Case -> No paramtere, then the Bt will eb filled with 1s irrespeective of its previous state
    bt.set(); //11111
    //Second Case - If there is one paramtere, then it will take that as the index and will update that index with 1
    bt.set(1); //11001
    //Third Case - here with the help of a second paramter, we can mention what value to replace with (0 or 1) according to our chocie
    bt.set(0, 0); //This sets the 0th index to 0 unlike(bt.set(0))

    bt.reset();  //This turns all the elements to be 0
    bt.reset(2); //This turns particualrly the 2nd index to be turned to be 0
    //test -> checks if the bit is set or not at a certain index
    cout << bt.test(1);
    //size - gets the size of the bitset
    cout << bt.size();
    return 0;
}