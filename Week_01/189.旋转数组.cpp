/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int count = 0;
        k = k %  nums.size();

        for (int i = 0; count < nums.size(); i++)
        {
            int curIndex = i;
            int curValue = nums[i];
            do
            {
                int nextIndex = (curIndex + k) % nums.size();
                int temp = nums[nextIndex];
                nums[nextIndex] = curValue;
                curIndex = nextIndex;
                curValue = temp;
                count++;
            } while (i != curIndex);
        }
    }
};
// @lc code=end

