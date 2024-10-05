class Solution {
private:

void solve(vector<int> nums,int index, vector<int> output, vector<vector<int>>& ans){
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums,index+1,output,ans);
    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums,index+1,output,ans);
}

int xorOfArrayElements(vector<int> nums){
    int n = nums.size();
    int sum = 0;
    for(int num:nums){
        sum^=num;
    }
    return sum;
}

public:
    int subsetXORSum(vector<int>& nums) {
        int n =nums.size();
        vector<vector<int>> ans;
        vector<int> output;
        
        solve(nums,0,output,ans);

        int xorSum = 0;

        for(int i = 0;i<ans.size();i++){
            int sum = xorOfArrayElements(ans[i]);
            xorSum += sum;
        }
        
        return xorSum;
    }
};