/*
 * @lc app=leetcode.cn id=589 lang=cpp
 *
 * [589] N叉树的前序遍历
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

// class Solution {
// private:
//     void travel(Node* root, vector<int>& result)
//     {
//         if (nullptr == root)
//         {
//             return;
//         }
//         result.push_back(root->val);
//         for (Node* child : root->children)
//         {
//             travel(child, result);
//         }
//     }
// public:
//     vector<int> preorder(Node* root) {
//         vector<int> result;
//         travel(root, result);
//         return result;
//     }
// };

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        if (nullptr == root)
        {
            return result;
        }
        stack<Node*> stk;
        stk.push(root);
        while (!stk.empty())
        {
            Node* cur = stk.top();
            stk.pop();
            result.push_back(cur->val);
            for (int i = cur->children.size() - 1; i >= 0; i--)
            {
                if (cur->children[i] != nullptr)
                {
                    stk.push(cur->children[i]);
                }
            }
        }
        return result;
    }
};
// @lc code=end

