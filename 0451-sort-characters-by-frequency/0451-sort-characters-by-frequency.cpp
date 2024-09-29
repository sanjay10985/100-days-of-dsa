class Solution {
public:
    string frequencySort(string s) {
        int n = s.length();
        unordered_map<char,int> map;
        priority_queue<pair<int,char>> pq;
        string ans;
        for(char c:s){
            map[c]++;
        }
        // map to pq

        for(auto it:map){
            pq.push({it.second,it.first});
        }

        while(!pq.empty()){
            auto temp = pq.top();
            int freq = temp.first;
            char ch = temp.second;
            ans += string(freq,ch);
            pq.pop();
        }

        return ans;
    }
};