class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> res;
        
        for(int index = 0 ; index < queries.size() ; index++ )
        {   int count = 0;
            for(int ipoints = 0 ; ipoints < points.size() ; ipoints++)
            { 
                //(x1 - x2)^2 * (y1 - y2)^2 == r*r
                if((queries[index][0] - points[ipoints][0])*(queries[index][0] - points[ipoints][0]) + (queries[index][1] - points[ipoints][1])*(queries[index][1] - points[ipoints][1]) <= queries[index][2]*queries[index][2])
                    count++;
            }
            res.push_back(count);
        }
        return res;
    }
};