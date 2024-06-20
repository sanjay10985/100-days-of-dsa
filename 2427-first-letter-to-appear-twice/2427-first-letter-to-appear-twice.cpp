class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<int,char> map;
        char repeat;
        for(int i = 0;i<s.length();i++){
            if(map.count(s[i])){
                repeat = s[i];
                break;
            }
            map[s[i]] = i;
        }
        return repeat;
    }
};