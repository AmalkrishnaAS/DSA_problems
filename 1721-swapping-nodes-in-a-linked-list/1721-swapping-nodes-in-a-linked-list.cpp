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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode *selected=head;
        int length=0;
        while(selected) {
            length++;
            selected=selected->next;
        }
        
      int  m=k-1;
        
        k=length-k;
        
        selected=head;
        while(k--) {
            selected=selected->next;
        }
        // cout<<selected->val;
        // return NULL;
        
        ListNode *curr=head;
        
        while(m--) curr=curr->next;
        // cout<<curr->val;
        // return NULL;
        swap(selected->val,curr->val);
        return head;
        
        
    }
};