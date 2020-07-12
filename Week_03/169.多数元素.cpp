/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
private:
    int majority(vector<int>& nums, int lo, int hi) {
        if (lo == hi)
            return nums[lo];

        int mid = (lo + hi) / 2;
        int leftMajority = majority(nums, lo, mid);
        int rightMajority = majority(nums, mid + 1, hi);
        if (leftMajority == rightMajority)
            return leftMajority;
        if (count(nums.begin() + lo, nums.begin() + hi + 1, leftMajority) > 
            count(nums.begin() + lo, nums.begin() + hi + 1, rightMajority))
            return leftMajority;
        else 
            return rightMajority;
    }

public:
    int majorityElement(vector<int>& nums) {
        return majority(nums, 0, nums.size()-1);
    }
};
// @lc code=end

