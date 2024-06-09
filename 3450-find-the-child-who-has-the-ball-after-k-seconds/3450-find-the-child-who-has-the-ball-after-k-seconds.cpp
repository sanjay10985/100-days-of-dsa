class Solution {
public:
    int numberOfChild(int n, int k) {
        int i = 0;
        int j= 1;
        while(k){
            if(j && i<n-1){
            i++;

            }
            else if(j && i==n-1){
                j=0;
                i--;

            }
            else if(j==0 && i == 0){
                j=1;
                i++;
            }
            else if(j==0 && i>0){
                i--;
            }
            k--;
            
        }
        return i;
    }
};