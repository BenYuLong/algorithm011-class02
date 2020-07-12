/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
private:
    void backtrack(vector<vector<int>>& result, vector<int>& output, int first, int len)
    {
        if (first == len)
        {
            result.push_back(output);
            return;
        }
        for (int i = first; i < len; ++i)
        {
            swap(output[i], output[first]);
            backtrack(result, output, first + 1, len);
            swap(output[i], output[first]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(result, nums, 0, (int)nums.size());
        return result;
    }
};
// @lc code=end

