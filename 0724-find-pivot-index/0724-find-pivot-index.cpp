class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int num:nums){
            sum+=num;
        }
        int currentSum = 0;
        for(int i = 0;i<n;i++){
            if( currentSum == sum - currentSum - nums[i] ){
                return i;
            }
            currentSum += nums[i];
        }
        return -1;
    }
};