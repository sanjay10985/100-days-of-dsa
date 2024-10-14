class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size()
;        unordered_map<int,int> map;
        for(int i = 0;i<n;i++){
            if (map.find(arr[i] * 2) != map.end() || (arr[i] % 2 == 0 && map.find(arr[i] / 2) != map.end())) {
                return true;
            }
            map[arr[i]] = i;
        }

        return false;
    }
};