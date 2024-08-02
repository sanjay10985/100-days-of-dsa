class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ele;
        int count = 0;

        for(int i = 0;i<n;i++){
            if(count == 0){
                ele = nums[i];
                count++;
            }
            else if(nums[i] == ele) count++;
            else count--;
        }

        int count1 = 0;

        for(int i = 0;i<n;i++){
            if(nums[i] == ele) count1++;
        }

        if(count1 > n/2) return ele;

        return -1;
    }
};