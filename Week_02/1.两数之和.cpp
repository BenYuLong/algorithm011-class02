/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> a;
        vector<int> res(2);

        for (int i = 0; i < nums.size(); i++)
        {
            if (0 < a.count(target - nums[i]))
            {
                res[0] = a[target - nums[i]];
                res[1] = i;
                break; 
            }
            a[nums[i]] = i;
        }
        return res;
    }
};
// @lc code=end

