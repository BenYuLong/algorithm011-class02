/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int nums = 0;
        int buf[2] = {1, 1}; 

        if (n <= 1)
        {
            return 1;
        }
        for (int i = 2; i <= n; ++i)
        {
            nums = buf[0] + buf[1];
            buf[0] = buf[1];
            buf[1] = nums;
        }
        return nums;
    }
};
// @lc code=end

