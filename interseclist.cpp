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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        int m=0,n=0,diff;
        while(temp1)
        {
            temp1=temp1->next;
            m++;
        }
        temp1=headB;
        while(temp1)
        {
            temp1=temp1->next;
            n++;
        }
        diff=m-n;
        if(n>m)
        {
            temp1=headA;
            headA=headB;
            headB=temp1;
            diff=n-m;
        }
        ListNode* temp2=headB;
        temp1=headA;
        for(int i=0;i<diff;++i)
        {
            temp1=temp1->next;
        }
        while(temp1&&temp2)
        {
            if(temp1==temp2)
                return temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
        
    }
};