class Solution {
    public:
        ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
            if(l1 == NULL) return l2;
            if(l2 == NULL) return l1;
            ListNode* head=NULL;   

            if(l1->val<l2->val) 
            { 
                head=l1; 
                l1=l1->next; 
            } 
            else 
            { 
                head=l2; 
                l2=l2->next; 
            }

            ListNode* final=head; 
            while(l1 && l2)
            {
                if(l1->val<l2->val) 
                { 
                    final->next=l1; 
                    l1=l1->next; 
                } 
                else 
                { 
                    final->next=l2; 
                    l2=l2->next; 
                }
                final=final->next;
            }

            if (l1) { 
                final->next=l1;
            } else {
                final->next=l2;
            }

            return head;
            }
};
