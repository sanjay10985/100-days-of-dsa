class Solution {
public:
    int countPoints(string rings) {
        // support variables
        int res = 0, rods[10] = {};
        // populating rods
        for (int i = 0, lmt = rings.size(), col; i < lmt; i += 2) {
            col = rings[i];
            rods[rings[i + 1] - '0'] |= (col == 'R' ? 1 : col == 'G' ? 2 : 4);
        }
        // checking the final values in rods
        for (int n: rods) res += n == 7;
        return res;
    }
};