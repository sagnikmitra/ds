//Priority Queue is a kind of Data Structure where it will have the max at the top
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //This is the process to create Max Heap
    priority_queue<int> maxHeap;
    //process to create a min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    maxHeap.push(1);
    maxHeap.push(3);
    maxHeap.push(2);
    maxHeap.push(0);
    int n = maxHeap.size();
    while (maxHeap.empty() != 1)
    {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << maxHeap.top() << " ";
    //     maxHeap.pop();
    // }
    cout << endl;

    minHeap.push(1);
    minHeap.push(3);
    minHeap.push(2);
    minHeap.push(0);
    int nMin = minHeap.size();
    while (minHeap.empty() != 1)
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    // for (int i = 0; i < nMin; i++)
    // {
    //     cout << minHeap.top() << " ";
    //     minHeap.pop();
    // }
    cout << endl;
    cout << "Is Empty: " << minHeap.empty() << endl;
    return 0;
}