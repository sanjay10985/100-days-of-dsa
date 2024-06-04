class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        if(n == 1){
            return 1;
        }
        int palindromeLength = 0;
        unordered_map<char,int> map;
        for(int i = 0;i<n;i++){
            if(map.count(s[i])){
                palindromeLength+=2;
                map.erase(s[i]);
            }
            else{
            map[s[i]] = i;
            }
        }

        if (!map.empty()) {
            palindromeLength += 1;
        }
        return palindromeLength;
    }
};