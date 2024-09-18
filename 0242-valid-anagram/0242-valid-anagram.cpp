class Solution {
public:
    bool isAnagram(string s, string t) {
        int lengths = s.length();
        int lengtht = t.length();

        if(lengths != lengtht){
            return false;
        }

        unordered_map<char,int> map;

        for(char ch:s){
            map[ch]++;
        }

        for(char ch:t){
            map[ch]--;

            if(map[ch] < 0) return false;
        }

        return true;
    }
};