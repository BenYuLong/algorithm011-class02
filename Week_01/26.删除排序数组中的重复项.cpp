/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if (0 == nums.size())
        {
            return 0;
        }
        int index = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if(nums[index] != nums[i])
            {
                nums[++index] = nums[i];
            }
        }
        nums.resize(index+1);
        return nums.size();
    }
};
// @lc code=end

