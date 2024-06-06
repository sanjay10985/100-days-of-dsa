class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> arrayOfIndices;
        for(int i = 0;i<words.size();i++){
            string word = words[i];
            if(words[i].find(x) != std::string::npos){
                arrayOfIndices.push_back(i);
            }
        }
        return arrayOfIndices;
    }
};