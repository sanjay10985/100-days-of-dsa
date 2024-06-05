class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        const int ALPHABET_SIZE = 26;
        vector<int> minFreq(ALPHABET_SIZE,INT_MAX);
        vector<string> res;
        for(const string& word: words){
            vector<int> freq(ALPHABET_SIZE,0);
            for(char c:word){
                freq[c - 'a']++;
            }
            for(int i = 0;i<ALPHABET_SIZE;i++){
                minFreq[i] = min(minFreq[i], freq[i]);;
            }
        }

        for(int i = 0;i<ALPHABET_SIZE;i++){
            while(minFreq[i] > 0){
                res.push_back(string(1,'a'+ i));
                minFreq[i]--;
            }
        }
        return res;
    }
};