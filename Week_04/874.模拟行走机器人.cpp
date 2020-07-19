/*
 * @lc app=leetcode.cn id=874 lang=cpp
 *
 * [874] 模拟行走机器人
 */

// @lc code=start
class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int direX[] = {0,1,0,-1};
        int direY[] = {1,0,-1,0};
        int curx=0,cury=0;
        int curdire = 0;
        int ans = 0;
        set<pair<int, int>> obstacleSet;
        for(auto o : obstacles)
            obstacleSet.insert(make_pair(o[0], o[1]));
        for(int cmd : commands){
            if(cmd == -1){  // -1：向右转 90 度
                curdire = (curdire + 1) % 4;
            }else if(cmd == -2){  // -2：向左转 90 度
                 curdire = (curdire + 3) % 4;
            }else{  //  1 <= x <= 9：向前移动 x 个单位长度
                for(int j = 0; j < cmd; j++){
                    //走一步
                    int nx = curx + direX[curdire];
                    int ny = cury + direY[curdire];
                    if (obstacleSet.find(make_pair(nx, ny)) == obstacleSet.end()) {
                        //不是障碍，更新max
                        curx = nx;
                        cury = ny;
                        ans = max(ans, curx*curx + cury*cury);
                    }else{
                        //障碍
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

