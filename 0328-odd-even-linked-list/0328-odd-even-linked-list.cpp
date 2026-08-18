class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;//even head ka use 2 ka address save krne keh liye hai

        while (even != nullptr && even->next != nullptr) { //check krta hai keh even ya even ka next null hai jo null nikla to koi changes nahi honge

            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead; // join for 2 node

        return head;
    }
};