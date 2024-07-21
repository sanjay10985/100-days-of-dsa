class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int GlobalMax = 0;
        for(string str:sentences){
            int max = 0;
            for(char ch: str){
                if(ch == ' '){
                   max++; 
                }
            }
            max++;
        if(max > GlobalMax){
            GlobalMax = max;
        }
        }
        return GlobalMax;
    }
};