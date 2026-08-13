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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;//
        ListNode* cur = head;//create a node 
         
         while(cur != nullptr){
            ListNode * temp = cur->next;//loop run then after go to end of null
            int check = 0;

            while(temp != nullptr){
                if(temp->val > cur->val){ // compare value of temp with curr
                check = temp->val;
                break; //  bcoz of I want need a 1st greater node 
                }
                temp = temp->next; 
            }
            ans.push_back(check);//store a ans
            cur = cur->next; // point next node
         }
        return ans;
    }
};