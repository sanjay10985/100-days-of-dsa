class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        vector<pair<int,int>> rowStrength;
        for(int i = 0;i<n;i++){
            int totalOnes = getOnes(mat[i]);
            rowStrength.push_back({totalOnes,i});
        }

        sort(rowStrength.begin(),rowStrength.end());

        vector<int> result;

        for(int i = 0;i<k;i++){
            result.push_back(rowStrength[i].second);
        }

        return result;


    }

    int getOnes(vector<int> nums){
        int n= nums.size();
        int low = 0;
        int high = n-1;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == 0){
                high = mid-1;

            }
            else{
                low = mid+1;
            }
        }

        return low;
    }
};