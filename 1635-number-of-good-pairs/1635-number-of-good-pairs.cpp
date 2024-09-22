class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int arr[101] = {0};
        int result = 0;
        for(int i = 0;i<nums.size();i++){
            result += arr[nums[i]]++;
        }
        return result;
    }
};