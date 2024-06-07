class Solution {
public:
    string reversePrefix(string word, char ch) {
        int length = word.length();
        string ans = word;
        for(int i = 0;i<length;i++){
            if(word[i] == ch){
                reverse(ans,i);
                break;
            }
        }
        return ans;
    }

    void reverse(string &word,int end){
        int left = 0;
        int right = end;
        while(left<right){
            char temp =word[left];
            word[left] = word[right];
            word[right] = temp;
            left++;
            right--;
        }
    }


};