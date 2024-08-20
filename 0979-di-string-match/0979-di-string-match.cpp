class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length() +1 ;
        vector<int> ans;
        int I = 0;
        int D = n-1;
        int i =0 ;
        if(s[0] == 'I'){
            ans.push_back(I);
            I++;
            i++;
        }
        for(i ;i<n;i++){
            if(s[i] == 'D'){
                ans.push_back(D);
                D--;
            }
            else{
                ans.push_back(I);
                I++;
            }
        }
        return ans;
    }
};