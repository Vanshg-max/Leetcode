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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
          vector<vector<int>> result ;
        if(root == NULL) return result;
        
        queue<TreeNode*> q;
        q.push(root);
        
        bool leftToRight = true;

        while(!q.empty()){
            int size = q.size();
            vector <int > arr(size) ;
            
            for(int i = 0; i < size; i++){
                TreeNode* frontElement = q.front();
                q.pop();
                
                int index = leftToRight ? i : size-i-1;
                arr[index]= frontElement-> val;
                
                if(frontElement->left){
                    q.push(frontElement -> left);
                }
                if(frontElement->right){
                    q.push(frontElement->right);
                }
                
                
            }
            
                result.push_back(arr);
            // direction change 
            leftToRight = !leftToRight;
            
        
        }
       
        return result;

        
    }
};