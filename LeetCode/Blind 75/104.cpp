#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:

//dfs
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0;

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        return 1 + max(leftDepth, rightDepth);
    }
    
// bfs
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        queue<TreeNode* > q;

        q.push(root);
        int depth = 0;
        while (!q.empty())
        {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; i++)
            {
                TreeNode *currentNode = q.front();
                q.pop();
                if (currentNode->left)
                {
                    q.push(currentNode->left);
                }
                if (currentNode->right)
                {
                    q.push(currentNode->right);
                }
            }
            depth++;
        }
        return depth;
    }
};
