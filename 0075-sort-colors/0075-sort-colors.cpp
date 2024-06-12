class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> arr(10,0);
        vector<int> colors;
        for(int i = 0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        for(int i = 0;i<3;i++){
            while(arr[i] != 0){
                colors.push_back(i);
                arr[i]--;
            }
        }
        nums=colors;
    }
};