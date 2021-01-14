/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
const long int mod = 1e9+7;
class Solution {
public:
    long int dfs1(TreeNode *root)
    {
        if(root == NULL) return 0;
        long int x = root->val + dfs1(root->left) + dfs1(root->right);
        return x;
    }
    int dfs2(TreeNode *root,long int &ans,long int sum)
    {
        if(root == NULL) return 0;
        long int left = dfs2(root->left,ans,sum);
        long int right = dfs2(root->right,ans,sum);
        long int x = root->val + left + right;
        long int prod = (x*(sum-x));
        ans = max(ans,prod);
        return x;
    }
    int maxProduct(TreeNode* root) 
    {
        long int tsum = dfs1(root);
        long int ans = 0;
        dfs2(root,ans,tsum);
        return ans%mod;
    }
};