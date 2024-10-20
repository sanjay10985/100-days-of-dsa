class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(9);
        int n = s.length();
        int start = 0;

        for (int i = 0; i < n; ++i) {
            if (isdigit(s[i])) {
                
                int pos = s[i] - '1'; 
                words[pos] = s.substr(start, i - start);
                start = i + 2; 
            }
        }
        string result = words[0];
        for (int i = 1; i < 9; ++i) {
            if (!words[i].empty()) {
                result += " " + words[i];
            }
        }

        return result;
    }
};
