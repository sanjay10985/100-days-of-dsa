class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int emps=0;
        for(int hour:hours){
            if(hour>=target){
                emps++;
            }
        }
        return emps;
    }
};