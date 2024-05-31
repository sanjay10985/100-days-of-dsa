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
        int xor_result = 0;

        // XOR all the numbers
        for (int num : nums)
        {
            xor_result ^= num;
        }

        // Get the rightmost set bit in xor_result
        unsigned int set_bit = xor_result & -static_cast<unsigned int>(xor_result);

        int num1 = 0, num2 = 0;

        // Divide numbers into two groups based on the set bit
        for (int num : nums)
        {
            if (num & set_bit)
            {
                num1 ^= num;
            }
            else
            {
                num2 ^= num;
            }
        }

        return {num1, num2};
    }
};

int main()
{

    Solution singles;
    vector<int> nums = {1, 2, 1, 3, 2, 5}; // Example input

    // Output should be [3, 5] or [5, 3] as it's mentioned the order doesn't matter
    // Example output: Output: [3,5] or [5,3]
    vector<int> result = singles.singleNumber(nums);
    print(result);
    return 0;
}
