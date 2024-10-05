class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxPro = nums[0];
        int minPro = nums[0];
        int result = nums[0];

        for(int i = 1;i<n;i++){
            if(nums[i] < 0){
                swap(maxPro,minPro);
            }

            maxPro = max(nums[i],maxPro * nums[i]);
            minPro = min(nums[i],minPro * nums[i]);

            result = max(result,maxPro);
        }
        return result;
    }
};