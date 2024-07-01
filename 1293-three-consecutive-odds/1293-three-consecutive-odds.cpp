class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int codd = 0;

        for(int num: arr){
           
            if(num%2){
                codd++;
                if(codd >2){
                return true;
                }
            }
            
            else{
                codd = 0;
            }

        }
        return false;
    }
};