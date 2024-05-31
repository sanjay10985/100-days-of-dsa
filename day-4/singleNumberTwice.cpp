#include <iostream>
#include <vector>
#include "utils.h"
#include <unordered_map>

using namespace std;

//  Question: Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice.
//  Find the two elements that appear only once. You can return the answer in any order.
//  You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.

class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        int n = nums.size();

        // If there are only two elements, return them
        if (n == 2)
        {
            return nums;
        }

        // Count the frequency of each number
        unordered_map<int, int> freq;
        for (int num : nums)
        {
            freq[num]++;
        }

        // Find the numbers with frequency 1
        vector<int> ans;
        for (const auto &pair : freq)
        {
            if (pair.second == 1)
            {
                ans.push_back(pair.first);
            }
        }

        return ans;
    }
};

int main()
{
    // Create an instance of Solution class
    Solution singles;

    // Example input
    vector<int> nums = {1, 2, 3, 4, 4, 3, 2, 1};

    // Find the numbers that appear only once
    vector<int> result = singles.singleNumber(nums);

    // Print the result
    print(result);

    return 0;
}
