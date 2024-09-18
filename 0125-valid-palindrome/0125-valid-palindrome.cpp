class Solution {
public:
    bool isPalindrome(string s) {
        string str;

        for(char ch:s){
            if(isalnum(ch)){
                str+=tolower(ch);
            }
        }

        int left = 0;
        int right = str.length()-1;

        while(left<right){
            if(str[left] != str[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};