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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* prevGroup = head;
        ListNode* curr = head->next;

        int k = 2;

        while (curr != nullptr) {
            int count = 0;
            ListNode* temp = curr;

            while (temp != nullptr && count < k) {
                count++;
                temp = temp->next;
            }
            if (count % 2 == 0) {

                ListNode* prev = nullptr;
                ListNode* node = curr;

                for (int i = 0; i < count; i++) {
                    ListNode* next = node->next;
                    node->next = prev;
                    prev = node;
                    node = next;
                }

                prevGroup->next = prev;

                curr->next = node;

               
                prevGroup = curr;
                curr = node;
            }
            else {
                
                for (int i = 0; i < count; i++) {
                    prevGroup = curr;
                    curr = curr->next;
                }
            }

            k++;
        }

        return head;
    }
};