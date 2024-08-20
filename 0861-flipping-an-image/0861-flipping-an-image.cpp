class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();    
        for(int i = 0;i<n;i++){
            reverse(image[i]);
        }
        return image;
    }

    void reverse(vector<int> &arr){
        int n = arr.size();
        for(int i = 0;i<n/2;i++){
            swap(arr[i],arr[n-i-1]);
        }
        for(int i = 0;i<n;i++){
            arr[i] = !arr[i];
        }
    }


};