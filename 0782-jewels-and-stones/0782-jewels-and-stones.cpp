class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;

        for(int i = 0;i<stones.length();i++){
            char ch = stones[i];

            if(jewels.contains(ch)){
                count++;
            }
        }
        return count;
    }
};