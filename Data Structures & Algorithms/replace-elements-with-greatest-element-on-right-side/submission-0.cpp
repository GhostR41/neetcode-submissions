class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> nums(n, 0);

        // if (n == 1){
        //     return {-1};
        // }

        for (int i=0; i<n-1; i++){
            //max in arr -> set as arr[i] -> remove the max one -> repeat
            auto greatest = *max_element(arr.begin() + i + 1, arr.end());
            nums[i] = greatest;
        }
        nums[n-1] = -1;
        return nums;
    }
};