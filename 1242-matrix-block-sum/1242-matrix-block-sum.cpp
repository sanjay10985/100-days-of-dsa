class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));

        for(int i = 0;i<n;i++){
            int m = mat[i].size(); 
            for(int j = 0;j<m;j++){
               ans[i][j] =  matsum(mat,i,j,k,n,m);
            }
        }
        return ans;
    }

    int matsum(vector<vector<int>>& mat,int row,int col,int k,int n,int m){
        int sum = 0;
        for(int r = max(0, row-k); r<=min(n-1,row+k);r++){
            for(int c = max(0,col -k); c<= min(m-1,col + k); c++  ){
                sum += mat[r][c];   
            }
        }
        return sum;
    }
};