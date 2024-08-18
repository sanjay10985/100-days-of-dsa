class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAltitude = gain[0];
        for(int i = 1;i<gain.size();i++){
            gain[i] = gain[i-1] + gain[i];
            if(gain[i] > maxAltitude){
                maxAltitude = gain[i];
            }
        }
        return maxAltitude < 0 ? 0 : maxAltitude;
    }
};