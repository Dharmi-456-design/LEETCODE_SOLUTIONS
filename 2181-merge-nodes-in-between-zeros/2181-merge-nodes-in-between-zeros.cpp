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
    ListNode* mergeNodes(ListNode* head) {
        ListNode * ans = new ListNode(0);
        //poin the current last node  and also use for when We don’t need to traverse the entire list to create a new node
        ListNode * p = ans;
        //ans use for remember list address
        int sum = 0;

        head= head->next; 
       while(head){
        if(head->val == 0){
            p->next = new ListNode(sum);
            p = p->next ;
            sum = 0;
        }
        else{
            //add a number inside sum
            sum += head->val;
        }
        head = head->next; 
       }
       return ans->next;
}
};