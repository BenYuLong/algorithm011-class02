/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(0 != nums[i])
            {
                if(index != i)
                {
                    nums[index] = nums[i];
                    nums[i] = 0;
                }
                index++;
            }
        }
    }
};
// @lc code=end

