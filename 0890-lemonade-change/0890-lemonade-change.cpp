class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0,ten = 0;
        int count[2] = {0, 0};
        for(int bill:bills){
            if(bill == 5){
                count[0]++;
            }
            else if(bill == 10){
                if(count[0]){
                    count[0]--;
                    count[1]++;
                }
                else{
                    return false;
                }
            }
            else{
                 if(count[0] && count[1]){
                    count[0]--;
                    count[1]--;

                }
                else if(count[0] >= 3){
                    count[0] -= 3;
                }
                
                else {
                    return false;
                }
            }

        }
        return true;
    }
};