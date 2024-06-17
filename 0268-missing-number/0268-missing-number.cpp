class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> map;
        for(int i = 0;i<n;i++){
            map[nums[i]] = i;
        }

        for(int i = 0;i<n;i++){
            if(!map.count(i)){
                return i;
            }
        }
        return n;
    }
};