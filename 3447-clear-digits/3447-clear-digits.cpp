class Solution {
public:
    string clearDigits(string s) {
        int n = s.length();
        string clear;
        for(int i = 0;i<n;i++){
            if(s[i] >= '0' && s[i]<='9'){
                if(clear.length() > 0 && i>=0){
                    clear.pop_back();
                }
                continue;
            }
            else{
                clear.push_back(s[i]);
            }
        }
        return clear;
    }
};