#include <iostream>
#include <vector>
#include "utils.h"
#include <unordered_map>

using namespace std;

// Question: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.
// Input : nums = [ 4, 1, 2, 1, 2 ] Output : 4

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        int ans = 0;
        for (int num : nums)
        {
            ans ^= num;
        }

        return ans;
    }
};

int main()
{
    Solution singles;
    vector<int> nums = {4, 1, 2, 1, 2};

    int result = singles.singleNumber(nums);
    cout << result;
    return 0;
}