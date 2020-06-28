/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int index1 = m-1;
        int index2 = n-1;
        int indexRes = m + n -1;

        while (index2 >= 0)
        {
            while (index1 >= 0 && nums1[index1] > nums2[index2])
            {
                swap(nums1[indexRes--], nums1[index1--]);
            }
            swap(nums1[indexRes--], nums2[index2--]);
        }
    }
};
// @lc code=end

