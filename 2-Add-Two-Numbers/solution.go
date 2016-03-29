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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode preheader(-1), *curr = &preheader;
        int carry = 0;
        while(l1 || l2 || carry) {
            curr->next = new ListNode(((l1? l1->val : 0) + (l2? l2->val : 0) + carry) % 10);
            curr = curr->next;
            carry = ((l1? l1->val : 0) + (l2? l2->val : 0) + carry) / 10;
            l1? l1 = l1->next : 0;
            l2? l2 = l2->next : 0;
        }
        return preheader.next;
    }
};