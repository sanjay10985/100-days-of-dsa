class Solution {

public:
    int subsetXORSum(vector<int>& nums) {
          int xorSum = 0;
        
        // XOR all elements of the array
        for (int num : nums) {
            xorSum |= num;
        }
        
        return xorSum * (1 << (nums.size() - 1));
    }
};