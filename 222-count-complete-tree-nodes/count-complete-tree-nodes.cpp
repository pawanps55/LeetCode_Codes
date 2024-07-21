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
private:
     void inorder(TreeNode* root,vector<int>&vect){
        
        if(root == NULL){
        return ;}
            
        inorder(root-> left,vect);
        vect.push_back(root-> val);
        inorder(root -> right,vect);
             
        }
public:
   
    int countNodes(TreeNode* root) {
        vector<int>vect;
        
        inorder(root,vect);
        return vect.size();
    }
};