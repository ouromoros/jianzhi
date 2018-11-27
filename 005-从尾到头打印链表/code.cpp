/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> a;
        ListNode *prev_node = NULL;
        ListNode *t;
        while(head != NULL){
            t = head->next;
            head->next = prev_node;
            prev_node = head;
            head = t;
        }
        while(prev_node != NULL){
            a.push_back(prev_node->val);
            prev_node = prev_node->next;
        }
        return a;
    }
};