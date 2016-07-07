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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *post = head, *prev = head->next;
        while (prev){
            if (prev->val == post->val){
                post->next = prev->next;
                ListNode *temp = prev;
                prev = prev->next;
                delete temp;
            }
            else{
                post = post->next;
                prev = prev->next;
            }
        }
        return head;
    }
};