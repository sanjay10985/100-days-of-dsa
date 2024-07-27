class Solution {
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> array(2 * n);
        int j = 0;
        for (int i = 0; i < 2 * n; i += 2)
        {
            array[i] = nums[j++];
        }
        j = n;
        for (int i = 1; i < 2 * n; i += 2)
        {
            array[i] = nums[j++];
        }

        return array;
    }
  
};