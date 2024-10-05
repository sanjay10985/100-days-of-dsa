class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int maxNum = nums[0];
        int currentSum = nums[0];

        for(int i = 1;i<n;i++){
            currentSum = max(nums[i],currentSum + nums[i]);
            maxNum = max(maxNum,currentSum);
        }
        return maxNum;
    }
};