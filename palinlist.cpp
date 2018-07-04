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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=head;
        while(curr!=NULL)
        {
            next=next->next; 
            curr->next=prev;
            prev=curr;
            curr=next;
                       
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        int l=0;
        while(temp)
        {
            temp=temp->next;
            ++l;
        }
        temp=head;
        for(int i=0;i<(l+1)/2;++i)
        {
            temp=temp->next;
        }
        temp=reverseList(temp);
        ListNode* temp2=head;
        while(temp)
        {
            if(temp->val!=temp2->val)
                return false;
            temp=temp->next;
            temp2=temp2->next;
        }
        return true;
    }
};