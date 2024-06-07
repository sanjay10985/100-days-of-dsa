class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
      unordered_set<string> dict(dictionary.begin(), dictionary.end());
        stringstream ss(sentence);
        string word, ans;

        while (ss >> word) {
            string prefix;
            for (int i = 1; i <= word.length(); ++i) {
                prefix = word.substr(0, i);
                if (dict.find(prefix) != dict.end()) {
                    break;
                }
            }
            if (!ans.empty()) {
                ans += " ";
            }
            ans += prefix;
        }
        return ans;
    }

    
};