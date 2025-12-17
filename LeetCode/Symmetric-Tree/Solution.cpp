1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    bool solve(TreeNode* root1,TreeNode* root2)
15    {
16        if(!root1 && !root2)    return 1;
17        if(!root1 &&  root2)    return 0;
18        if(root1 &&  !root2)    return 0;
19        if(root1->val!=root2->val)  return 0;
20        return solve(root1->left,root2->right) && solve(root1->right,root2->left);
21    }
22    bool isSymmetric(TreeNode* root) {
23        return solve(root->left,root->right);
24    }
25};