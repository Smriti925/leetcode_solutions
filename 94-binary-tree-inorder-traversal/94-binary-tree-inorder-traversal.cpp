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
    void solveIn(TreeNode* root, vector<int> &v){
        if(root==NULL) return;
        solveIn(root->left,v);
        v.push_back(root->val);
        solveIn(root->right,v);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
     vector<int> v;
        solveIn(root,v);
        return v;
    }
};