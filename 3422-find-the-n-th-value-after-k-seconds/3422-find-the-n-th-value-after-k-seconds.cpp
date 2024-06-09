class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int> array(n,1);
        const int MOD = 1000000007;

        while(k--){
            for(int i = 1;i<n;i++){
                array[i] = (array[i] + array[i-1])%MOD;
            }
        }

        return array[n-1];
    }
};