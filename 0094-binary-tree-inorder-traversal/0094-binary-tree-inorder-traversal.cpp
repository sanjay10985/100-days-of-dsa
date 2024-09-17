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
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> tree;
        inorder(root,tree);
        return tree;
    }

    private:

    void inorder(TreeNode* node, vector<int>& result){
            if(node == NULL) return; 
            inorder(node->left,result);
            result.push_back(node->val);
            inorder(node->right,result);
    }
};