class Solution {
    
private:
    int dp[1001][1001];
    int suffix[1001];
public:
    int recur(string &floor,int numCarpets,int carpetLen,int idx)
    {
        //Base Cases
        if(idx>=floor.size())
            return 0;
    
        if(numCarpets==0)
            return suffix[idx];
        
        //Memoization
        if(dp[idx][numCarpets]!=-1)
            return dp[idx][numCarpets];
        
        //Check if current tile is white,
        //We need to add 1 because we are skipping
        int op1=(floor[idx]=='1')+recur(floor,numCarpets,carpetLen,idx+1);
        //We are using one carpet and hence we jump directly 
        //by carpetLen moves
        int op2=recur(floor,numCarpets-1,carpetLen,idx+carpetLen);
        return dp[idx][numCarpets]=min(op1,op2);
    }
    int minimumWhiteTiles(string floor, int numCarpets, int carpetLen) {
        
       int n=floor.size();
       memset(dp,-1,sizeof dp);
        
       
       suffix[n - 1] = (floor[n - 1] == '1');
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + (floor[i] == '1');
        }
        return recur(floor,numCarpets,carpetLen,0);
    }
};