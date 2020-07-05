/*
 * @lc app=leetcode.cn id=264 lang=cpp
 *
 * [264] 丑数 II
 */

// @lc code=start
class Solution {
public:
    // int nthUglyNumber(int n) {
    //     vector<int> ugly(n, 1);
    //     int c2 = 2, c3 = 3, c5 = 5;
    //     int i2 = 0, i3 = 0, i5 = 0;
    //     for (int i = 1; i < n; i++)
    //     {
    //         int last = ugly[i] = min(c2, min(c3, c5));
    //         while (c2 <= last) c2 = 2 * ugly[++i2];
    //         while (c3 <= last) c3 = 3 * ugly[++i3];
    //         while (c5 <= last) c5 = 5 * ugly[++i5];
    //     }
    //     return ugly[n-1];
    // }
    int nthUglyNumber(int n) {
        priority_queue<double, vector<double>, greater<double>> pq;
        set<double> s;
        s.insert(1);
        int mask[3] = {2,3,5};
        double result = 1;
        for (int i = 1; i < n; i++)
        {
            for (int j : mask)
            {
                if (0 == s.count(result*j))
                {
                    pq.push(result*j);
                    s.insert(result*j);
                }
            }
            result = pq.top();
            pq.pop();
        }
        return result;
    }
};
// @lc code=end

