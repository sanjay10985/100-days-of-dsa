class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> compare(allowed.begin(),allowed.end());
        int ans= 0;
        for(string s: words){
            int correct = true;
            for(char c: s){
                if(compare.find(c) == compare.end()){
                    correct = false;
                    break;
                }
              
            }
            if(correct){
                ans++;
            }
        }
        return ans;
    }
};