class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int maxValue = (1<<maximumBit) -1;
        vector<int> sub(n);
        sub[n-1] = nums[0] ^ maxValue;

        for(int i = 1;i<n;i++){
            sub[n-i-1] = nums[i] ^ sub[n-i];
        }

        return sub;
        
    }
};