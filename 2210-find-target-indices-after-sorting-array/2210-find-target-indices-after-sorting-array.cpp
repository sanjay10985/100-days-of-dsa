class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = n-1;
        vector<int> ans;

       int first = findFirstOccurrence(nums,target);
       int last = findLastOccurrence(nums,target);

       if (first == -1 || last == -1) {
        return {};
        }

        for(int i = first; i<=last; i++){
            ans.push_back(i);
        }


        return ans;
    }

    int findFirstOccurrence(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int firstIndex = -1;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                firstIndex = mid;
                high = mid-1;
            }
            else if(nums[mid] > target){
                high = mid-1;
            }
            else {
                low = mid + 1;
            }
        }

        return firstIndex;

    }

    int findLastOccurrence(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int lastIndex = -1;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                lastIndex = mid;
                low = mid+1;
            }
            else if(nums[mid] > target){
                high = mid-1;
            }
            else {
                low = mid + 1;
            }
        }

        return lastIndex;

    }

};