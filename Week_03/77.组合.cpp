/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
class Solution {
private:
    vector<vector<int>> result;

    void dfs(int n, int k, int start, vector<int> &path)
    {
        if (k == path.size())
        {
            result.push_back(path);
            return;
        }

        for (int i = start; i <= n - (k - path.size()) + 1; ++i)
        {
            path.push_back(i);
            dfs(n, k, i+1, path);
            path.pop_back();
        }
    }

public:
    vector<vector<int>> combine(int n, int k) {
        if (n <= 0 || k <= 0 || k > n)
        {
            return result;
        }
        vector<int> path;
        dfs(n, k, 1, path);
        return result;
    }

    // vector<vector<int>> combine(int n, int k) {
    //     vector<vector<int>> result;
    //     int i = 0;
    //     vector<int> p(k, 0);
    //     while (i >= 0)
    //     {
    //         p[i]++;
    //         if (p[i] > n)
    //             --i;
    //         else if (i == k-1)
    //             result.push_back(p);
    //         else
    //         {
    //             ++i;
    //             p[i] = p[i - 1];
    //         }
            
    //     }
    //     return result;
    // }
};
// @lc code=end

