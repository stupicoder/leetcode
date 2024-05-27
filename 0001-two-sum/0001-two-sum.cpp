class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        const size_t num = nums.size();
        for(int i = 0; i < num; ++i)
        {
            int curNum = nums[i];
            for(int j = i + 1; j < num; ++j)
            {
                if (curNum + nums[j] == target)
                {
                    result[0] = i;
                    result[1] = j;
                    return result;
                }
            }
        }

        return result;
    }
};