class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arrayOfHeights = heights;
        sort(heights.begin(),heights.end());
        int no =0;
        for(int i = 0;i<heights.size();i++){
            if(arrayOfHeights[i] != heights[i]){
                no++;
            }
        }
        return no;
    }
};