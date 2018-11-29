/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        ListNode* prevK = pListHead;
        for(unsigned int i = 0; i < k; i++) {
            if(pListHead == NULL) return NULL;
            pListHead = pListHead->next;
        }
        while(pListHead != NULL){
            pListHead = pListHead->next;
            prevK = prevK->next;
        }
        return prevK;
    }
};