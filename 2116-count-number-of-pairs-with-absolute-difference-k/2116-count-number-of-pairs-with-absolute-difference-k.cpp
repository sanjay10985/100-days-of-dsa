class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int pairs = 0;
        int n = nums.size();
        unordered_map<int,int> map;
        for(int num:nums){
            pairs += map[num+k] + map[num-k];
            map[num]++;
        }

        return pairs;

    }
};