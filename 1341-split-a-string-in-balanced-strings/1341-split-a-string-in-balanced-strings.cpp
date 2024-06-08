class Solution {
public:
    int balancedStringSplit(string s) {
        int n = 0;
        int r = 0;
        int l = 0;
        for(char c: s){
            if(c == 'R') r++;
            else if(c == 'L') l++;
            if(l!=0 && r==l){
                n++;
                l--;r--;
            }

        }

        return n;
    }
};