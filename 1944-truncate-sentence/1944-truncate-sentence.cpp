class Solution {
public:
    string truncateSentence(string s, int k) {
        int words = 0;
        for(int i = 0;i<s.length();i++){
           if(s[i] == ' '){
            words++;
            if(words == k){
                return s.substr(0,i);
            }
           }
        }
        return s;
    }
};