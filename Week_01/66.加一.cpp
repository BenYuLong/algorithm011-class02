/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int digitsSize = digits.size();
        for (int i = digitsSize-1; i >= 0; i--)
        {
            digits[i]++;
            digits[i] %= 10;
            if (0 != digits[i])
            {
                return digits;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
// @lc code=end

