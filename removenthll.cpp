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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        ListNode* temp=head;
        while(temp)
        {
            temp=temp->next;
            l++;
        }
        temp=head;
        if(n==l)
        {
            head=head->next;
            return head;
        }
        for(int i=1;i<=l-n-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};