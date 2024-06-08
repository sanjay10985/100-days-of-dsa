class Solution {
public:
    int balancedStringSplit(string s) {
        int n = 0;
        int r = 0;
        int l = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == 'R') r++;
            else if(s[i] == 'L') l++;
            if(l!=0 && r==l){
                n++;
                l--;r--;
            }

        }

        return n;
    }
};