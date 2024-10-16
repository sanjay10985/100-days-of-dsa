class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) return n;
        vector<int> nums(n+1,0);
        nums[0] = 0;
        nums[1] = 1;
        int maxEle = 1;
        for(int i = 2;i<=n;i++){
            if(i%2){
                nums[i]=nums[i/2] + nums[i/2 +1];
            }else{
                nums[i]=nums[i/2];
                
            }
            maxEle = max(nums[i],maxEle);
        }
    return maxEle;
    }
};