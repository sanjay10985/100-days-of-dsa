class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int maxValue = (1<<maximumBit) -1;
        vector<int> maximumXor;
        int cumulativeXor = 0;

        for(int num:nums){
            cumulativeXor ^= num;
        }

        for(int i = n-1;i>=0;i--){
            maximumXor.push_back(cumulativeXor ^ maxValue);
            cumulativeXor ^=nums[i];
        }

        return maximumXor;
    }
};