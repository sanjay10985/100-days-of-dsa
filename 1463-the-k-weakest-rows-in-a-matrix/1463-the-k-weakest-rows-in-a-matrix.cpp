class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for(int i = 0;i<n;i++){
            int totalOnes = getOnes(mat[i]);
            pq.push({totalOnes, i}); 
        }


        vector<int> result;

        for(int i = 0;i<k;i++){
result.push_back(pq.top().second); 
            pq.pop();        }

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