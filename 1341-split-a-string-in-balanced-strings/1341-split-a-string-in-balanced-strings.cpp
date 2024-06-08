class Solution {
public:
    int balancedStringSplit(string s) {
        int n = 0;
        int nors = 0;
        int nols = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == 'R'){
                nors++;
                if(nors == nols){
                    n++;
                    nors=0;
                    nols=0;
                }
            }
            else if(s[i] == 'L'){
                nols++;
                if(nors == nols){
                    n++;
                    nors=0;
                    nols=0;
                }
            }
        }

        return n;
    }
};