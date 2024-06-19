class Solution {
public:
    string finalString(string s) {
        int n = s.length();
        string result;
        for(int i = 0;i<n;i++){
            if(s[i] == 'i' ){
                reverse(result.begin(),result.end());
                continue;
            }
            
            result+=s[i];
        }
        return result;
    }

};