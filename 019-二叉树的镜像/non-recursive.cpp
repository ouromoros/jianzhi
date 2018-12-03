/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    void Mirror(TreeNode *pRoot) {
        stack<TreeNode*> s;
        s.push(pRoot);
        while (!s.empty()) {
            TreeNode *t = s.top();
            s.pop();
            if (t == NULL) continue;
            swap(t->left, t->right);
            s.push(t->left);
            s.push(t->right);
        }

    }
};