class Solution {
public:
    void sortColors(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        vector<vector<int>> bins(maxVal + 1);

        for (int x : nums){
            bins[x].push_back(x);
        }

        int index = 0;
        for (auto& bin: bins){
            for (int x : bin){
                nums[index++] = x;
            }
        }
    }
};