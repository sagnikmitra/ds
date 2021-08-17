//begin, end
//also there are reverse being and recverwse end -> rbegin rend
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data; // data
    string name;
};
int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    set<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x); //takes log(N) time where N is the size of the set
    }
    st.erase(st.begin());
    st.erase(st.begin(), (st.begin()++)++);
    st.erase(st.end());
    st.erase(5);

    //Unordered Set
    //If there is no case of storing in ascending order, htne we can switch to unordered set and if there is any TLE, then we cans again switch to set
    unordered_set<int> stUO;

    return 0;
}