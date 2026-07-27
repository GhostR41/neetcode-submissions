class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> data;

        if(!nums.empty()){
            for (int i=0; i<nums.size(); i++){
                int complement = target - nums[i];
                
                if (data.find(complement) != data.end()){
                    int index = data[complement];
                    return {index, i};
                }

                data.emplace(nums[i], i);
                //or it can be: data.insert({nums[i], i});
            }
        }
        return {};
    }
};
