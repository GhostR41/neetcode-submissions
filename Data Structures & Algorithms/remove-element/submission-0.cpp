class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(), nums.end());
        return remove(nums.begin(), nums.end(), val) - nums.begin();
    }
};