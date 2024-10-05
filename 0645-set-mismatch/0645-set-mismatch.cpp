class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> set;
        vector<int> ans;
        int doubleNumber;
        int sum = 0;
        
        for(int i = 0;i<n;i++){
            if(set.find(nums[i]) != set.end()){
                ans.push_back(nums[i]);
                doubleNumber = nums[i];
            }
            sum+=nums[i];
            set.insert(nums[i]);
        }

        int remainingNumber = ((n* (n+1))/2) - (sum - doubleNumber);
        ans.push_back(remainingNumber);
        return ans;
    }
};