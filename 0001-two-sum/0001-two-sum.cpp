class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        const size_t num = nums.size();
        for(int i = 0; i < num -1; ++i)
        {
            for(int j = i + 1; j < num; ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    return { i, j };
                }
            }
        }

        return {};
    }
};