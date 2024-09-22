class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> count;
        int ans = 0;

        for(int i = 0;i<nums.size();i++){
            count[nums[i]]++;
        }
        
        for(auto it: count){
            int pairs = 0;
            if(it.second > 1){
                int n = it.second;
                pairs = n*(n-1)/2;
            }
            ans += pairs;
        }

        return ans;
    }
};