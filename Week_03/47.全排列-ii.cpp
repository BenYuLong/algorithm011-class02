/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
class Solution {
private:
    void backtrack(vector<vector<int>>& result, vector<int>& output, int first, int len)
    {
        bool isRepeat = false;
        if (first == len)
        {
            result.push_back(output);
            return;
        }
        for (int i = first; i < len; ++i)
        {
            isRepeat = false;
            for (int j = first; j < i; j++)
            {
                if (output[j] == output[i])
                {
                    isRepeat = true;
                }
            }
            if(!isRepeat)
            {
                swap(output[i], output[first]);
                backtrack(result, output, first + 1, len);
                swap(output[i], output[first]);
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(result, nums, 0, (int)nums.size());
        return result;
    }
};
// @lc code=end

