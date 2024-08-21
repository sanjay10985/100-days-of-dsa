class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0,j=0;
        int n = nums.size();
        while(i<n && j<n){
            if(nums[j]%2 == 0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return nums;
    }
};