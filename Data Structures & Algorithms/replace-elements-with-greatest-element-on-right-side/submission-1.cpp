class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int greatest = -1;
        int n = arr.size()-1;

        for (int i=n; i>=0; i--){
            int current = arr[i];
            arr[i] = greatest;
            greatest = max(greatest, current);
        }
        return arr;
    }
};