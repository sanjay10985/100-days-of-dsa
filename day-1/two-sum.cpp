#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n - 1; i++)
        {
            int one = nums[i];
            for (int j = i + 1; j < n; j++)
            {
                int two = nums[j];
                if (target - one == two)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    int arr[] = {2, 7, 11, 15};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    if (!result.empty())
    {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    }
    else
    {
        cout << "No solution found!" << endl;
    }
    return 0;
}

// Time complexity: O(n2)