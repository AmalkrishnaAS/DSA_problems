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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=0,d1,d2,sum;
        
        ListNode * dummy=new ListNode();
        ListNode *current=dummy;
        
        while(l1 || l2 || carry)
        {
            d1=(l1)?l1->val:0;
            d2=(l2)?l2->val:0;
            
            sum=d1+d2+carry;
            carry=sum/10;
            d1=sum%10;
            current->next=new ListNode(d1);
            
            
            current=current->next;
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
        return dummy->next;
        
    }
};