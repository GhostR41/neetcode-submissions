class Solution {
public:
    void sortColors(vector<int>& nums) {
        //int maxVal = *max_element(nums.begin(), nums.end());
        //vector<vector<int>> bins(maxVal + 1);
        int bins[3] {0};

        for (int x : nums){
            bins[x]++;
        }

        int index = 0;
        for (int i=0; i<3; i++){
            while(bins[i]--){
                nums[index++] = i;
            }
        }
    }
};