class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int i = 0;
        int j = k-1;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans =INT_MAX;
        while(j<n){
           ans = min(ans,nums[j++]-nums[i++]);
        }
        return ans;
    }
};