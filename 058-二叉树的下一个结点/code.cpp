/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
*/
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if (pNode->right == NULL) {
            TreeLinkNode *n = pNode->next;
            while (n != NULL && n->right == pNode) {
                pNode = n;
                n = n->next;
            }
            return n;
        }
        pNode = pNode->right;
        while(pNode->left != NULL) {
            pNode = pNode->left;
        }
        return pNode;
    }
};