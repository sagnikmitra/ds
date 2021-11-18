#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        //so, we are taking an unordered map just because, we don't want to hamper the values in the hash with respect to the order
        unordered_map<int, int> hash;
        //declaring a result vector for storing the result and return it
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            //here through this we tried to find the complement target
            int numsTF = target - nums[i];
            //the below singnifies that we have found the number in the hash that we were looking for
            if (hash.find(numsTF) != hash.end())
            {
                //so, as we found the number, we need to put its indices in the result vector that is done in the below step
                result.push_back(hash[numsTF]);
                result.push_back(i);
            }
            //but if it is not found in the hash, which will generally be the case, then we will push its existence to the hash for further use
            hash[nums[i]] = i;
        }
        //and we are returning the result vector
        return result;
    }
};
int main()
{
    //declaring the vector and the target
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    //here we are printing the result
    vector<int> result = s.twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}