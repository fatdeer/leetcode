/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int len = 1;
        ListNode *cur = head;
        
        if (head == NULL) {
            return head;
        }
        
        while (cur->next) {
            len++;
            cur = cur->next;
        }
        
        k = k % len;
        
        if (k == 0) {
            return head;
        }
        
        cur->next = head;  // loop
        
        cur = head;
        
        for (int i = 0; i < len - k - 1; i++) {
            cur = cur->next;
        }
        
        ListNode *const newTail = cur;
        ListNode *const newHead = cur->next;
        
        newTail->next = NULL;
        
        return newHead;
    }
};