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
        int n=0;
        ListNode*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        int mid=n/2;
        ListNode*temp1=head;

        for(int i=0;i<mid;i++){
            temp1=temp1->next;

        }
        return temp1;

        
        

        
    }
};