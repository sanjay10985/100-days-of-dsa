class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0,j=0;
        while(j<n){
            if(nums[j] !=0 ){
                if(i!=j){
                swap(nums,i,j);
                }
                i++;
            }
            j++;
        }
    }

    void swap(vector<int>& nums,int a,int b){
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }
};