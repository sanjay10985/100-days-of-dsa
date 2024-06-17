class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;
        int result = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 1){
                result++;
            }
            else{
                result = 0;
            }
                maxOnes = max(result,maxOnes);
            
        }
        return maxOnes;
    }
};