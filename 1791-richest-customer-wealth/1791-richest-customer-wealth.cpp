class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth = 0;
        for(int i = 0;i<accounts.size();i++){
            vector<int> person = accounts[i];
            int wealth = 0;
            for(int j =0;j<person.size();j++){
                wealth+=accounts[i][j];
            }
            maxwealth = max(maxwealth,wealth);
        }
        return maxwealth;
    }
};