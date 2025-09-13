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
    TreeNode *invertTree(TreeNode *root)
    {
        if(root == NULL) return root;
        
        TreeNode* temp = root->left; 
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
    void printLevelOrder(TreeNode* root)
    {
        if (!root) return;
    
        queue<TreeNode*> q;
        q.push(root);
    
        while (!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            cout << node->val << " ";
    
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        cout << endl;
    }
};

int main()
{
    // Build tree: [4,2,7,1,3,6,9]
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    Solution sol;
    TreeNode* result = sol.invertTree(root);

    cout << "Tree after inversion (level-order): ";
    sol.printLevelOrder(result);

    return 0;
}
