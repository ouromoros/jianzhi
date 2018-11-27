class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> a;
        push(a, head);
        return a;
    }
    void push(vector<int> &a, ListNode* node) {
        if(node == NULL) return;
        push(a, node->next);
        a.push_back(node->val);
    }
};