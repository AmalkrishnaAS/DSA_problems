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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *list3 = new ListNode(-1);
         ListNode * dummy=list3;
    while(list1!=nullptr&&list2!=nullptr)
        {
            if(list1->val<list2->val)
            {
                list3->next=list1;
                
                list1=list1->next;
            }
            else
            {
                list3->next=list2;
                
                list2=list2->next;
            }
            list3=list3->next;
        }
        while(list1!=nullptr)
        {
            list3->next=list1;
            list3=list3->next;
             list1=list1->next;
        }
         while(list2!=nullptr)
        {
            list3->next=list2;
            list3=list3->next;
             list2=list2->next;
        }
        return dummy->next;
        
    }
    ListNode* sortList(ListNode* head) {
        
        if(not head or not head->next) return head;
        ListNode *temp=head;
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast and fast->next)
        {
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        temp->next=NULL;
        ListNode *left=sortList(head);
        ListNode *right=sortList(slow);
        return mergeTwoLists(left,right);
        
    }
};