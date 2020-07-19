/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j)
    {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
        {
            return;
        }
        if ('0' == grid[i][j])
        {
            return;
        }
        else
        {
            grid[i][j] = '0';
            dfs(grid, i-1, j);
            dfs(grid, i, j-1);
            dfs(grid, i+1, j);
            dfs(grid, i, j+1);
        }
    }
    int numIslands(vector<vector<char>>& grid)
    {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if ('1' == grid[i][j])
                {
                    count++;
                    dfs(grid, i, j);
                }
            }
        }
        return count;
    }
};
// @lc code=end

