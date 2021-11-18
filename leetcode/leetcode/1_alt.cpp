#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> imap;

    for (int i = 0;; ++i)
    {
        auto it = imap.find(target - nums[i]);

        if (it != imap.end())
            return vector<int>{i, it->second};

        imap[nums[i]] = i;
    }
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}