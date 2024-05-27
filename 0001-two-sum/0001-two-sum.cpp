class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        const size_t num = nums.size();
        for(int i = 0; i < num; ++i)
        {
            const int curNum = nums[i] - target;
            for(int j = i + 1; j < num; ++j)
            {
                if (curNum + nums[j] == 0)
                {
                    return { i, j };
                }
            }
        }

        return {};
    }
};