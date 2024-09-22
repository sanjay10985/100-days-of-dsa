class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans = nums;
        unordered_map<int,int> map;
        sort(ans.begin(),ans.end());

        for(int i = n-1;i>=0;i--){
            map[ans[i]] = i;
        }

        for(int i = 0;i<n;i++){
            nums[i] = map[nums[i]];
        }
        return nums;
    }
};