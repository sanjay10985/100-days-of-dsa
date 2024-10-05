class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> set;
        for(string word:words){
            string convertedString = convertInMorse(word);
            set.insert(convertedString);
        }
        return set.size();
    }

    string convertInMorse(string word){
        vector<string> morse{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        string ans = "";

        for(char c: word){
            ans += morse[c-'a'];
        }

        return ans;

    }
};