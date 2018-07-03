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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(l1->val+l2->val);
        int carry=0;
        if(head->val>9)
        {
            head->val-=10;
            carry=1;
        }
        l1=l1->next;
        l2=l2->next;
        ListNode* temp1=head;
        while(l1&&l2)
        {
            ListNode* temp2=new ListNode(l1->val+l2->val+carry);
            if(temp2->val>9)
            {
                temp2->val-=10;
                carry=1;
            }
            else carry=0;
            temp1->next=temp2;
            temp1=temp1->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1)
        {
            ListNode* temp3=new ListNode(l1->val+carry);
            if(temp3->val>9)
            {
                temp3->val-=10;
                carry=1;
            }
            else carry=0;
            temp1->next=temp3;
            temp1=temp1->next;
            l1=l1->next;
        }
        while(l2)
        {
            ListNode* temp4=new ListNode(l2->val+carry);
            if(temp4->val>9)
            {
                temp4->val-=10;
                carry=1;
            }
            else carry=0;
            temp1->next=temp4;
            temp1=temp1->next;
            l2=l2->next;
        }
        if(carry==1)
        {
            ListNode* temp4=new ListNode(1);
            temp1->next=temp4;
        }
        return head;
    }
};