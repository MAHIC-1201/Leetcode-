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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        ListNode *odd=head;
        ListNode *evenhead=head->next;
        ListNode *even=head->next;
        while(odd->next!=NULL && even->next!=NULL)
        {
            odd->next=even->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=evenhead;
        return head;



    }
};