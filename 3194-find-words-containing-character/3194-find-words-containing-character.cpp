class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> arrayOfIndices;
        for(int i = 0;i<words.size();i++){
            string word = words[i];
            for(char c: word){
                if(c == x){
                    arrayOfIndices.push_back(i);
                    break;
                }
            }
        }
        return arrayOfIndices;
    }
};