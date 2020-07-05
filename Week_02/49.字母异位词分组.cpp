/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
private:
    string strSort(string s)
    {
        int counter[26] = {0};
        for (char c : s)
        {
            counter[c - 'a']++;
        }
        string t;
        for (int i = 0; i < 26; i++)
        {
            t += string(counter[i], i + 'a');
        }
        return t;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> map;

        for (string str : strs)
        {
            // string t = str;
            // sort(t.begin(), t.end());
            // map[t].push_back(str);
            map[strSort(str)].push_back(str);
        }
        for (auto p : map)
        {
            result.push_back(p.second);
        }
        return result;
    }
};
// @lc code=end

