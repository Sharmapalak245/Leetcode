
class Solution {
public:
    void traverse(TreeNode* root,vector<int>& res){
         if(root==NULL){
            return ;
         }

         res.push_back(root->val);
         traverse(root->left,res);
         traverse(root->right,res);

    }

    vector<int> preorderTraversal(TreeNode* root) {
            vector<int> res;
            traverse(root,res); 

            return res;
            
            
    }
};