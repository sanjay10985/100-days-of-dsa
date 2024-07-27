class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies = 0;
        int n = candies.size();
        vector<bool> result;
        for(int count: candies){
            if(count > max_candies){
                max_candies = count;
            }
        }

        for(int count: candies){
            if(count + extraCandies >= max_candies){
                result.push_back(true);

            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};