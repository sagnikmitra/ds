#include <bits/stdc++.h>
using namespace std;

/* 
    * verdict of the solution:
    this is the two pointer approach for the solution.
    here first of all we need to consider that the array is sorted and next we carry forward with the problem

    first, we take two pointers and a temporary variable to store their value. the left pointer or variable will point to the first element of the array and the right pointer will point to the last element of the array.
    then we need to check if the sum of the two pointers is equal to the target. if it is, we return the indices of the two pointers.
    */

vector<int> twoSum(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1, temp = 0;
    while (left < right)
    {
        temp = nums[left] + nums[right];
        if (temp == target)
        {
            return vector<int>{left, right};
        }
        else if (temp < target)
        {
            left++;
        }
        else
        {
            right--;
        }
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