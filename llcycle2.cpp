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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return NULL;
        ListNode* temp1=head->next;
        if(temp1==head) return head; 
        ListNode* temp2=head;
        int l1=0,l2=1;
        while(temp1)
        {
            l1++;
            while(l2!=l1)
            {
                if(temp1==temp2)
                    return temp1;
                temp2=temp2->next;
                l2++;
            }
            temp2=head;
            l2=1;
            temp1=temp1->next;
        }
        return NULL;
    }
};