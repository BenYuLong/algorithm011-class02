/*
 * @lc app=leetcode.cn id=429 lang=cpp
 *
 * [429] N叉树的层序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        if (nullptr == root)
        {
            return result;
        }
        queue<Node*> q;
        q.push(root);
        while (!q.empty())
        {
            vector<int> cur;
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                Node* temp = q.front();
                q.pop();
                cur.push_back(temp->val);
                for (auto n : temp->children)
                {
                    q.push(n);
                }
            }
            result.push_back(cur);
        }
        return result;
    }
};
// @lc code=end

