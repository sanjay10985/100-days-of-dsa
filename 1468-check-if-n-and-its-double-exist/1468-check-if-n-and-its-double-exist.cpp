class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size()
;        unordered_set<int> set;
        for(int i = 0;i<n;i++){
            if (set.find(arr[i] * 2) != set.end() || (arr[i] % 2 == 0 && set.find(arr[i] / 2) != set.end())) {
                return true;
            }
            set.insert(arr[i]); 
        }

        return false;
    }
};