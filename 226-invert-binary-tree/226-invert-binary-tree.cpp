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
//     TreeNode* invertTree(TreeNode* root) {
//         if(!root) return root;
//         if(!root->left && !root->right) return root;
//         return help(root->left, root->right,root);
//     }
    
//     }TreeNode* help(TreeNode* r1, TreeNode* r2, TreeNode* root){
//         int temp;
//         while(r1|| r2){
//             temp=r1->val;
//             r1->val=r2->val;
//             r2->val=temp;
//             help(r1->left, r2-> right,root);
//             help(r1->right, r2->left,root);
//             return root;
//         }
    TreeNode* invertTree(TreeNode* root) {
    if(root==NULL){
            return NULL;
        }
       
        
        TreeNode*temp=root->left;
        root->left=root->right;
        root->right=temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;}
};