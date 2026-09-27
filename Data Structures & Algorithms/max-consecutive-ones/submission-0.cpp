class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int final_count {0}, count {0};
        for (int i=0; i<nums.size(); i++){
            if (nums[i] == 1){
                count++;
            } 
            
            final_count = max(final_count, count);
        
            if (nums[i] == 0){
                count = 0;
            }
        }
        return final_count;
    }
};