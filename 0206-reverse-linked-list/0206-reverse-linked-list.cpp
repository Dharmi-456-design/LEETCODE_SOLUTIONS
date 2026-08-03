/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* res = NULL;
        ListNode* prev = NULL;

        while(curr != NULL){
            res = curr->next;
            curr->next = prev;
            prev = curr;
            curr= res;
        }
     return prev;
    }
};














