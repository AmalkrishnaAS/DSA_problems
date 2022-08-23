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
    bool isPalindrome(ListNode* head) {
        ListNode *selected=head;
        stack<ListNode *> s;
        
        while(selected){
            s.push(selected);
            selected=selected->next;
        }
        selected=head;
        while(!s.empty() and selected){
            ListNode *curr=s.top();
            s.pop();
            if(selected->val!=curr->val) return  false;
            selected=selected->next;
        }
        
        return true;
    }
};