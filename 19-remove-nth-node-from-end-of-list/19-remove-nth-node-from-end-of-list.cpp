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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *selected=head;
        
        int length=0;
        while(selected) {
            length++;
            selected=selected->next;
        } 
        if(n==length) {
            return head->next;
        }
        // if(length==1) return NULL;
        
        n=length-n-1;
        
        // if(n==0) {
        //     return head->next;
        // }
        
        selected=head;
        while(n-- and selected ) {
            selected=selected->next;
        }
        if(not selected) return head;
        
        if(not selected->next) selected=NULL;
        else {
            selected->next=selected->next->next;
        }
        
        
        
        return head;
    
        
    }
};