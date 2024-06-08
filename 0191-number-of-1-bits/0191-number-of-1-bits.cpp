class Solution {
public:
    int hammingWeight(int n) {
        int set =0;
        int i =0;
        while(i<32){
            if((n>>i)&1) set++;
            i++;
        }
        return set;
    }
};