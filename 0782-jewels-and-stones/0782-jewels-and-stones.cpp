class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = 0;
        for(char stone : stones){
            for(char jewel : jewels){
                if(stone == jewel){
                    n++;
                }
            }
        }
        return n;
    }
};