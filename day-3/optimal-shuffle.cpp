#include <iostream>
#include <vector>
#include "utils.h"

using namespace std;

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> array(2 * n);
        int j = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            array[2 * i] = nums[i];
            array[2 * i + 1] = nums[n + i];
        }

        return array;
    }
};

int main()
{
    Solution shuf;
    vector<int> nums = {1, 2, 3, 4, 4, 3, 2, 1};
    int n = 4;
    vector<int> shuffeldArray = shuf.shuffle(nums, n);
    print(shuffeldArray);

    return 0;
}