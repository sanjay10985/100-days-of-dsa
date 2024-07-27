class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewels_set(jewels.begin(),jewels.end());
        int count = 0;
        for(char ch: stones){
            if(jewels_set.find(ch) != jewels_set.end()){
                count++;
            }
        }
        return count;
    }
};