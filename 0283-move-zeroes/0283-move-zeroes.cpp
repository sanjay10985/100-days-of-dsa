class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        vector<int> result;
        int nozeros = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                nozeros++;
                continue;
            }
            result.push_back(nums[i]);
        }
        while(nozeros){
            result.push_back(0);
            nozeros--;
        }
        nums = result;

    }
};