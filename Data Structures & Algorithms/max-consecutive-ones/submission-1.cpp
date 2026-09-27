class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count {0}, final_count {0};
        int n = nums.size();

        for (int i=0; i<n; i++){
            count = 0;
            for (int j=i; j<n; j++){
                if (nums[j] == 0){
                    break;
                }
                count++;
            }
            final_count = max(count, final_count);
        }
        return final_count;
    }
};