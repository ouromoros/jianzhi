/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        return reConstructBinaryTree(pre, vin, 0, 0, vin.size());
    }
    TreeNode* reConstructBinaryTree(const vector<int> &pre, const vector<int> &vin, int p_index, int v_start, int v_end) {
        if(p_index >= pre.size()){
            return NULL;
        }
        if(v_start >= v_end) {
            return NULL;
        }
        int root = pre[p_index];
        TreeNode *t = new TreeNode(root);
        int v_index;
        for(int i = v_start; i < v_end; i++) {
            if(vin[i] == root) {
                v_index = i;
                break;
            }
        }
        t->left = reConstructBinaryTree(pre, vin, p_index + 1, v_start, v_index);
        t->right = reConstructBinaryTree(pre, vin, p_index + 1 + v_index - v_start, v_index + 1, v_end);
        return t;
    }
};