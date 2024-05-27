class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        const size_t num = nums.size();
        
        unordered_map<int, int> umap;
        umap.reserve(num);
        for(int i = 0; i < num; ++i)
        {
            umap.emplace(nums[i], i);
        }
        for(int i = 0; i < num; ++i)
        {
            auto iter = umap.find(target - nums[i]);
            if (iter != umap.end() && i != iter->second)
            {
                return { i, iter->second };
            }
        }

        return {};
    }
};