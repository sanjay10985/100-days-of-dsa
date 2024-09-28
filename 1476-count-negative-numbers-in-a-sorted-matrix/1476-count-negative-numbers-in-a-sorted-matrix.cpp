class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();

        for(int i = 0;i<n;i++){
            vector<int> row = grid[i];
            int count= negativesInArray(row);
            cout<<count<<" ";
            ans +=count;
            
        }
        return ans;
    }

    int negativesInArray(vector<int>& nums){
        int n = nums.size();
        int left = 0;
        int high = n - 1;
        int firstNegative = -1;

        while(left<=high){
            int mid = left + (high - left)/2;
            if(nums[mid] < 0){
                firstNegative = mid;
                high = mid -1;
            }
            else {
                left = mid + 1;
            }
           
        }

        if(firstNegative == -1){
            return 0;
        }

        return n-firstNegative;
    }
};