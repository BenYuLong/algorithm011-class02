/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (int num : nums)
        {
            map[num]++;
        }

        vector<int> result;
        priority_queue<pair<int,int>> pq;
        for (auto it = map.begin(); it != map.end(); it++)
        {
            pq.push(make_pair(it->second, it->first));
            if(pq.size() > map.size() - k)
            {
                result.push_back(pq.top().second);
                pq.pop();
            }
        }
        return result;
    }
};
// @lc code=end

