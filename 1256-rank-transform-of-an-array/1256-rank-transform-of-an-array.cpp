class Solution {

    struct NumberInfo {
    int rank;
    int frequency;
};
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp(arr.begin(),arr.end());
        sort(temp.begin(),temp.end());
        unordered_map<int,NumberInfo> numberData;

        int rank = 1;
        
        for(int i = 0;i<n;i++){
            if(numberData.find(temp[i]) != numberData.end()){
                numberData[temp[i]].frequency++;
            }
            else{
                numberData[temp[i]] = {rank++,1};
            }
        }

        for(int i = 0;i<n;i++){
           int originalValue = arr[i];  
            arr[i] = numberData[originalValue].rank; 


            numberData[originalValue].frequency--;
        }

        return arr;

    }
};