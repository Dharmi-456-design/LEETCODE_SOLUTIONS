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
    bool hasCycle(ListNode *head) {

        //SOLUTION-1
         
        //   set<ListNode*> address;
        //   ListNode* i = head;
        //   while(i != NULL) {
        //      if(address.count(i)){
        //         return true;
        //         }
        //         address.insert(i);
        //         i = i->next;
        //   }
        // return false;



        //SOLUTION-2

        ListNode* i = head;
        ListNode* j = head;

        while(j != NULL && j->next != NULL){
            i = i->next;
            j = j->next->next;

            if(i == j){
                return true;
            }

        }
        return false;
                
    }
};