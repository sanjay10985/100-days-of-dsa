class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> arr;
        int mul = 1;
        int sum = 0;
        while(n){
            arr.push_back(n%10);
            n /= 10;
        }
        for(int num:arr){
            sum+= num;
            mul*=num;
        }
        return mul-sum;
    }
};