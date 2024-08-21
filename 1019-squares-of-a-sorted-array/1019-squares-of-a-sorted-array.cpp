class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0,j=n-1;
        vector<int> result(n);
        for(int k = n-1;k>=0;k--){

            if(abs(nums[i]) > abs(nums[j])){
                result[k] = square(nums[i]);
                i++;
            }
            else{
                result[k] = square(nums[j]);
                j--;
            }

        }
        return result;
    }

    int square(int n){
        return n*n;
    }
};