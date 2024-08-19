class Solution {
public:
    string firstPalindrome(vector<string>& words) {
         int n = words.size();
    
        for(int i= 0;i<n;i++){
           string s = words[i];
            if(isPalindromic(s)){
               return s;
            }
        }
        return "";
    }

     bool isPalindromic(string s){
        int n = s.length();
        for(int i = 0;i<n/2;i++){
            if(s[i] != s[n-1-i]){
                return false;
            }
        }
        return true;
    }

};