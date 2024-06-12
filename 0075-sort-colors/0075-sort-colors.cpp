class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> arr(10,0);

        for(int i = 0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        int index= 0;
        for(int i = 0;i<3;i++){
            while(arr[i] != 0){
                nums[index++] = i;
                arr[i]--;
            }
        }

    }
};