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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)  return head;
        ListNode *h1 = head;
        ListNode*h2 = head->next->next;
        while(h2 && h2->next)
        {
            h1 = h1->next;
            h2 = h2->next->next;
        }
        h2 = h1->next;
        h1->next = NULL;
        return merge(sortList(head),sortList(h2));
    }
    ListNode *merge(ListNode*h1,ListNode*h2)
    {
        ListNode  *newHead = new ListNode(INT_MIN);
        ListNode  *node =newHead ;
        while(h1 && h2)
        {
            if(h1->val<h2->val)
            {
                node->next = h1;
                node = node->next;
                h1 = h1->next;
            }
            else
            {
                node->next = h2;
                node = node->next;
                h2 = h2->next;
            }
        }
        if(h1)  node->next = h1;
        else    node->next= h2;
        return newHead->next;
    }
};