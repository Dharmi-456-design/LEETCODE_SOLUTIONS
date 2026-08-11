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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
   //first set a all nums
   unordered_set s1(nums.begin(),nums.end());
   // after if head value inside the  set then after push the head
   while(head != nullptr && s1.count(head->val)){
    head= head->next;
   }
 ListNode* temp = head;

        while (temp!= nullptr && temp->next != nullptr) {
            if (s1.count(temp->next->val)) {
                temp->next = temp->next->next;
            }
            else {
                temp = temp->next;
            }
        }
  
   return head;
        
    }
};