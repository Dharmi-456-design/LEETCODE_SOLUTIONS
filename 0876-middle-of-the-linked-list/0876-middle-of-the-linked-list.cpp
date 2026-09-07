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
    ListNode* middleNode(ListNode* head) {

   // solution-1

    //     int count = 0;
    //     ListNode* curr = head;

        
    //     while(curr != NULL){
    //         count++;
    //         curr = curr->next;
    //     }

    //  int pos = (count / 2) + 1;

    //     curr = head;

       
    //     for(int i = 1; i < pos; i++){
    //         curr = curr->next;
    //     }

    //     return curr;

    //solution-2

    // ListNode* i = head;
    // int count = 0;
    // while(i != NULL){
    //     count++;
    //     i = i->next;
    // }
    // int mid = (count/2) + 1;

    // count = 1;
    // i = head;
    // while(count < mid){
    //     i = i->next;
    //     count++;
    // }
    // return i;

       //solution-2

       if(head->next == NULL) {
return head;
       }

ListNode* i = head;
ListNode* j = head->next;

while(j->next != NULL && j->next->next != NULL) {
i = i->next;
j = j->next->next;
}

return i->next;

}


};