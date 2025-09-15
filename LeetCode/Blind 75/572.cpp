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
    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {
        if(root == subRoot) return true;

        while(subRoot){
            visited.push_back(subRoot->value);
            root->left;
            root->right;
        }
        for(TreeNode& S : root){
            if(visited.find(s) != visited.end()){
                visited[s]--;
            }
        }~
    }
};
