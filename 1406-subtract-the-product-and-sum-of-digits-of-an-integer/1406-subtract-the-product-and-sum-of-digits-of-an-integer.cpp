class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> arr;
        int mul = 1;
        int sum = 0;
        while(n){
            int digit = n%10;
            sum+= digit;
            mul*=digit;
            n /= 10;

        }
     
        return mul-sum;
    }
};