class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        const size_t num = nums.size();
        for(int i = 0; i < num; ++i)
        {
            int curNum = nums[i];
            for(int j = i + 1; j < num; ++j)
            {
                if (curNum + nums[j] == target)
                {
                    return { i, j };
                }
            }
        }

        return {};
    }
};