#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    //Sorting and Reversing, in both the cases, we have a open endIterator, if it is arr+4, then it will go until arr+3, the arr+4 is the open upper bound, we can say.
    sort(arr, arr + n); //Sorts in increasing order
    sort(arr + 1, arr + 3);
    vector<int> vec(5, 0);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    sort(vec.begin() + 1, vec.end() - 1);
    //If I want to find max in any index range
    int maxEl = *max_element(arr, arr + n); //pointer points to the value of the iterator
    int minEl = *min_element(arr, arr + n);
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    //same goes for the vector, just we need to add the vect.begin() and vect.end()
    int vecMinEl = *min_element(vec.begin(), vec.end());
    int vecMaxEl = *max_element(vec.begin(), vec.end());
    int sumArr = accumulate(arr, arr + n, 0);
    int sumVec = accumulate(vec.begin(), vec.end(), 0);
    return 0;
}