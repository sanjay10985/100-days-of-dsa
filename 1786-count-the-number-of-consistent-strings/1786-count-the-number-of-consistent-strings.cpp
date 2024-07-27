class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> compare(allowed.begin(),allowed.end());
        int ans= 0;
        for(string s: words){
            int correct = false;
            for(int i = 0;i<s.length();i++){
                if(compare.find(s[i]) != compare.end()){
                    correct = true;
                    continue;
                }
                else{
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