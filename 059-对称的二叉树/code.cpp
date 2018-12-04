/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot)
    {
        if (pRoot == NULL) return true;
        return isSymmetrical(pRoot->left, pRoot->right);
    }
    
    bool isSymmetrical(TreeNode* a, TreeNode* b) {
        if (a == NULL && b == NULL) {
            return true;
        }
        if (a == NULL || b == NULL) {
            return false;
        }
        if (a->val != b->val) {
            return false;
        }
        return isSymmetrical(a->left, b->right) && isSymmetrical(a->right, b->left);
    }

};