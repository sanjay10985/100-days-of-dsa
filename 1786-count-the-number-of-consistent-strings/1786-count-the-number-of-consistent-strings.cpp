class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       unordered_set<char> set(allowed.begin(),allowed.end());

       int flag = true;
       int ans = 0;
       for(string s:words){
        flag = true;
        for(char c:s){
            if(set.find(c) == set.end()){
                flag = false;
                break;
            }
        }
        if(flag){
            ans++;
        }
       }

       return ans;
    }
};